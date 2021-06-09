/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:14:40 by gade-lim          #+#    #+#             */
/*   Updated: 2021/06/09 10:38:04 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (unsigned char)c)
		i++;
	if (s[i] == '\0')
	{
		if ((unsigned char)c == '\0')
			return ((char *)s + i);
		else
			return (NULL);
	}
	else
		return ((char *)s + i);
}
