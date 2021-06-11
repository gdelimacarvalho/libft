/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:37:23 by gade-lim          #+#    #+#             */
/*   Updated: 2021/06/11 17:38:08 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*new_s;

	new_s = malloc(nelem * elsize);
	if (new_s == NULL)
		return (NULL);
	ft_bzero (new_s, nelem * elsize);
	return (new_s);
}
