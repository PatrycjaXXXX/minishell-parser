/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 15:17:08 by psmolich          #+#    #+#             */
/*   Updated: 2026/04/11 17:35:43 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_parser.h"

void	error_msg(char *message)
{
	ft_putstr_fd(Y, 2);
	ft_putstr_fd(message, 2);
	ft_putstr_fd(R, 2);
}
