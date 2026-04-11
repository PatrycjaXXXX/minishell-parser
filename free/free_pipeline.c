/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_pipeline                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 17:16:53 by psmolich          #+#    #+#             */
/*   Updated: 2026/04/11 17:36:20 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_parser.h"

void	free_pipeline(t_pipeline *pipeline)
{
	t_pipeline	*current;
	t_pipeline	*temp;

	current = pipeline;
	while (current)
	{
		temp = current;
		current = current->next;
		if (temp->cmd.args)
			free_args(temp->cmd.args);
		if (temp->cmd.redirects)
			free_redirects(temp->cmd.redirects);
		free(temp);
	}
}
