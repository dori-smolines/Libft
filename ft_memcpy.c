/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolines <smolines@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:32:40 by smolines          #+#    #+#             */
/*   Updated: 2023/11/15 09:32:42 by smolines         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destchar;
	unsigned char	*srcchar;
	size_t			i;

	if ((!dest) && (!src))
		return (NULL);
	destchar = (unsigned char *) dest;
	srcchar = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		destchar[i] = srcchar[i];
		i++;
	}
	return (destchar);
}
