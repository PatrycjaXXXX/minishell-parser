/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_special.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 10:44:11 by psmolich          #+#    #+#             */
/*   Updated: 2026/04/11 17:38:01 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_parser.h"

// Checks if the character is a special character (PIPE or redirection).
int	is_special(char c)
{
	return (c == PIPE || is_redir(c));
}
