/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolines <smolines@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:21:59 by smolines          #+#    #+#             */
/*   Updated: 2023/11/15 09:22:01 by smolines         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if ((nmemb * size > 65535) || ((nmemb > 65535) && (size > 65535)))
		return (0);
	if ((nmemb == 0) || (size == 0))
	{
		nmemb = 1;
		size = 1;
	}
	p = (void *)malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero (p, nmemb * size);
	return (p);
}
