/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:32:48 by gade-lim          #+#    #+#             */
/*   Updated: 2021/06/09 12:50:40 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_u;
	unsigned char	*src_u;

	dest_u = (unsigned char *)dest;
	src_u = (unsigned char *)src;
	if (dest_u == NULL && src_u == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
			dest_u[n] = src_u[n];
		return (dest_u);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_u[i] = src_u[i];
			i++;
		}
		return (dest_u);
	}
}
