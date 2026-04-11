/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_quotes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 11:09:34 by psmolich          #+#    #+#             */
/*   Updated: 2026/04/11 17:38:01 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_parser.h"

// Checks if the string contains any single or double quotes.
int	has_quotes(const char *str)
{
	while (*str)
	{
		if (*str == SQ || *str == DQ)
			return (TRUE);
		str++;
	}
	return (FALSE);
}
