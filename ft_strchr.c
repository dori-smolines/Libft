/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolines <smolines@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:21:18 by smolines          #+#    #+#             */
/*   Updated: 2023/11/15 09:21:20 by smolines         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	size_t		s_len;
	char		*cpy;

	cpy = (char *)s;
	i = 0;
	s_len = ft_strlen(s);
	if (c == 0)
		return ((char *)s + s_len);
	while (i <= s_len)
	{
		if (cpy[i] == (char)c)
			return (&cpy[i]);
		i++;
	}
	return (0);
}
