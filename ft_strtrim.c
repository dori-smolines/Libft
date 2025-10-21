/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolines <smolines@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:20:09 by smolines          #+#    #+#             */
/*   Updated: 2023/11/15 09:20:10 by smolines         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set [i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		stop;
	char		*sresult;

	stop = ft_strlen(s1);
	start = 0;
	while (s1[start] && (ft_isinset(s1[start], set) == 1))
		start++;
	while ((ft_isinset(s1[stop - 1], set) == 1))
		stop --;
	sresult = ft_substr (s1, start, stop - start);
	return (sresult);
}
