/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:50:11 by gade-lim          #+#    #+#             */
/*   Updated: 2021/06/09 14:27:54 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest_u;
	unsigned char	*src_u;
	unsigned char	c_u;

	dest_u = (unsigned char *)dest;
	src_u = (unsigned char *)src;
	c_u = (unsigned char)c;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dest_u[i] = src_u[i];
		if (src_u[i] == c_u)
			return (dest_u + i + 1);
		i++;
	}
	return (NULL);
}
