/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolines <smolines@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:31:56 by smolines          #+#    #+#             */
/*   Updated: 2023/11/15 09:31:58 by smolines         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*schar1;
	unsigned char	*schar2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	schar1 = (unsigned char *) s1;
	schar2 = (unsigned char *) s2;
	while (i < n)
	{
		if (schar1[i] != schar2[i])
			return (schar1[i] - schar2[i]);
		i++;
	}
	return (0);
}
