/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:16:20 by twatson           #+#    #+#             */
/*   Updated: 2026/02/16 11:55:09 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"

# define TRUE 1
# define FALSE 0

# define SUCCESS 1
# define FAILURE 0

# define NUL 0
# define SQ 39
# define DQ 34
# define PIPE 124

# define P "\033[95m" // Purple
# define G "\033[92m" // Green
# define Y "\033[93m" // Yellow
# define R "\033[0m" // Reset color

# define ERR_MEMORY "Error: memory allocation failed\n"
# define ERR_UNCLOSED_QUOTE "Syntax error: unclosed quote\n"

typedef enum e_token_type
{
	TOKEN_WORD,
	TOKEN_REDIR,
	TOKEN_PIPE
}	t_token_type;

typedef struct s_token
{
	char			*value;
	t_token_type	type;
	struct s_token	*next;
}	t_token;

typedef enum e_redir_type
{
	REDIR_IN, //<
	REDIR_OUT, //>
	HEREDOC, //<<
	REDIR_APP, //>>
}	t_redir_type;

typedef struct s_redirects
{
	t_redir_type		type;
	char				*target;
	int					quote_delim; //is delimiter in heredoc quoted?
	struct s_redirects	*next;
}	t_redirects;

typedef struct s_cmd
{
	char		**args;
	t_redirects	*redirects;
}	t_cmd;

typedef struct s_pipeline
{
	t_cmd				cmd;
	struct s_pipeline	*next;
}	t_pipeline;

typedef struct s_shell
{
	char	**envp;
	int		last_status;
}	t_shell;

// FREE.c
void		free_tokens(t_token *tokens);
void		free_args(char **args);
void		free_redirects(t_redirects *redir);
void		free_pipeline(t_pipeline *pipeline);

// PRINT.c
void		print_envp(char **envp);
void		print_tokens(t_token *tokens);
void		print_pipeline(t_pipeline *pipeline);

// ERROR.c
void		error_msg(char *message);

// parsing utils
char		*char_to_str(char c);
char		*ft_strjoin_free(char *s1, char *s2);
int			has_quotes(const char *str);
int			is_redir(char c);
int			is_special(char c);
char		skip_whitespaces(char *line, int *index);

// parse_line.c
t_pipeline	*parse_line(char *line, t_shell shell);

// parse_word.c
char		*parse_word(char *word, t_shell shell, int expand);

// tokenize
t_token		*tokenize_line(char *line);
int			add_token_back(t_token **tokens, t_token *new_token);
int			add_token_pipe(t_token **tokens);
int			add_token_redir(t_token **tokens, char *line, int *index);
int			add_token_word(t_token **tokens, char *line, int *index);
int			check_token_syntax(t_token *tokens);

// create pipeline from tokens
t_pipeline	*create_pipeline_from_tokens(t_token *tokens, t_shell shell);
t_pipeline	*empty_pipeline(void);
int			add_arg(t_pipeline *current, t_token token, t_shell shell);
int			add_pipe(t_pipeline **current);
int			add_redir(t_pipeline *current, t_token **token, t_shell shell);

#endif
