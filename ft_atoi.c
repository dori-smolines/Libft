/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolines <smolines@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:56:38 by smolines          #+#    #+#             */
/*   Updated: 2023/11/15 08:56:44 by smolines         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char str)
{
	if ((str > 8 && str < 14) || (str == 32))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	nombre;

	nombre = 0;
	signe = 1;
	i = 0;
	while (ft_is_space(nptr[i]) == 1)
	{
		i++;
	}
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		signe = -signe;
		i++;
	}
	while ((nptr[i] > 47) && (nptr[i] < 58))
	{
		nombre = 10 * nombre + nptr[i] - 48;
		i++;
	}
	return (signe * nombre);
}
