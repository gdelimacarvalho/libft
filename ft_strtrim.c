/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 10:14:39 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/26 12:42:56 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	size_t	i;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (len > i && ft_strchr(set, s1[len]) != NULL)
		len--;
	new_s = ft_substr(s1, i, len - i + 1);
	return (new_s);
}
