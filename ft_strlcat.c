/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:34:20 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/18 11:06:20 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t d;
	size_t s;
	size_t result;

	d = 0;
	result = 0;
	while (src[result] != '\0')
		result++;
	while (dst[d] != '\0')
		d++;
	if (size <= d)
		result = result + size;
		
}
