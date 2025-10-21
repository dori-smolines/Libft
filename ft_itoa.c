/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolines <smolines@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:22:28 by smolines          #+#    #+#             */
/*   Updated: 2023/11/15 09:22:39 by smolines         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len = 1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_itoazero(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 2);
	if (result == NULL)
		return (NULL);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

static void	fill_result(char *result, long int nbr, int signe, int len)
{
	int	i;

	i = len - 1;
	result[len] = '\0';
	while (nbr > 0)
	{
		result[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	if (signe == -1)
		result[i] = '-';
}

char	*ft_itoa(int n)
{
	int			len;
	char		*result;
	int			signe;
	long int	nbr ;

	nbr = n;
	if (nbr == 0)
		return (ft_itoazero());
	len = ft_intlen (nbr);
	signe = 0;
	if (nbr < 0)
	{
		signe = -1;
		nbr = -nbr;
	}
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	fill_result(result, nbr, signe, len);
	return (result);
}
