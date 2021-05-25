/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:37:23 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/25 11:09:09 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*new;

	new = (unsigned char *)malloc(nelem * elsize);
	if (new == NULL)
		return (NULL);
	ft_bzero (new, nelem * elsize);
	return (new);
}
