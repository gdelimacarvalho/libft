/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:26:38 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/25 10:26:46 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_u;
	unsigned char	*src_u;

	dest_u = (unsigned char *)dest;
	src_u = (unsigned char *)src;
	i = 0;
	if (!dest && !dest)
		return (NULL);
	while (i < n)
	{
		dest_u[i] = src_u[i];
		i++;
	}
	return (dest_u);
}
