/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:50:11 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/24 16:57:44 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*u_dest;
	unsigned char	*u_src;
	unsigned char	u_c;

	u_dest = (unsigned char *)dest;
	u_src = (unsigned char *)src;
	u_c = (unsigned char)c;
	i = 0;
	if (!dest && !dest)
		return (NULL);
	while (i < n)
	{
		u_dest[i] = u_src[i];
		if (u_src[i] == u_c)
			return (u_dest + i + 1);
		i++;
	}
	return (NULL);
}
