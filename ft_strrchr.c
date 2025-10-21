/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolines <smolines@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:42:08 by smolines          #+#    #+#             */
/*   Updated: 2023/11/15 09:42:11 by smolines         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if ((char)c == '\0')
		return ((char *)&(s[s_len]));
	while (s_len)
	{
		if (s[s_len - 1] == (char)c)
			return ((char *)(s + s_len - 1));
		s_len--;
	}
	return (0);
}
