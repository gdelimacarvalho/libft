/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:04:17 by gade-lim          #+#    #+#             */
/*   Updated: 2021/06/09 11:31:04 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start)
		new_s = (char *)malloc(1 * sizeof(char));
	else if (ft_strlen(s) - start < len)
		new_s = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		new_s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL || new_s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	while (i < len && s[start] != '\0')
	{
		new_s[i] = s[start];
		i++;
		start++;
	}
	new_s[i] = '\0';
	return (new_s);
}
