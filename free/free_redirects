/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_redirects                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 17:17:17 by psmolich          #+#    #+#             */
/*   Updated: 2026/04/11 17:36:23 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_parser.h"

void	free_redirects(t_redirects *redir)
{
	t_redirects	*temp;

	while (redir)
	{
		temp = redir;
		redir = redir->next;
		if (temp->target)
			free(temp->target);
		free(temp);
	}
}
