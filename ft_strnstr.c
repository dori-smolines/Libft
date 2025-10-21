/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolines <smolines@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:41:45 by smolines          #+#    #+#             */
/*   Updated: 2023/11/15 09:41:47 by smolines         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (((!big) || (!little)) && (len == 0))
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0] && (i + ft_strlen(little) <= len))
		{
			if (ft_strncmp(&big[i], little, ft_strlen(little)) == 0)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
