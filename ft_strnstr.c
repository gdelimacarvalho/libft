/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:03:35 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/20 15:42:36 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	l;
	size_t	b;
	size_t	i;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			b = i;
			l = 0;
			while (big[b] == little[l] && little[l] != '\0' && b < len)
			{
				b++;
				l++;
			}
			if (little[l] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
