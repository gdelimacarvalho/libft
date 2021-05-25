/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:32:48 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/24 21:35:27 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*u_dest;
	unsigned char	*u_src;

	u_dest = (unsigned char *)dest;
	u_src = (unsigned char *)src;
	if (dest > src)
	{
		while (n-- > 0)
			u_dest[n] = u_src[n];
		return (u_dest);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			u_dest[i] = u_src[i];
			i++;
		}
		return (u_dest);
	}
}
