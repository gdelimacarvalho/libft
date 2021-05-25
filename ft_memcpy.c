/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:26:38 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/24 16:57:56 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*u_dest;
	unsigned char	*u_src;

	u_dest = (unsigned char *)dest;
	u_src = (unsigned char *)src;
	i = 0;
	if (!dest && !dest)
		return (NULL);
	while (i < n)
	{
		u_dest[i] = u_src[i];
		i++;
	}
	return (u_dest);
}
