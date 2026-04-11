/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_pipe.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:21:35 by psmolich          #+#    #+#             */
/*   Updated: 2026/04/11 17:35:57 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_parser.h"

int	add_pipe(t_pipeline **current)
{
	if (!current)
		return (FAILURE);
	(*current)->next = empty_pipeline();
	if (!(*current)->next)
		return (error_msg(ERR_MEMORY), FAILURE);
	*current = (*current)->next;
	return (SUCCESS);
}
