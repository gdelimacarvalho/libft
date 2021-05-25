/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:30:06 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/25 15:00:25 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_u;
	unsigned char	c_u;

	s_u = (unsigned char *)s;
	c_u = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		s_u[i] = c_u;
		i++;
	}
	return (s_u);
}
