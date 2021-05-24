/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:56:46 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/24 12:16:13 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_u;
	unsigned char	*c_u;

	s_u = (unsigned char *)s;
	c_u = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_u[i] == c_u)
			return (s_u + i);
		else
			i++;
	}
	return (NULL);
}
