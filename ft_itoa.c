/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:16:21 by gade-lim          #+#    #+#             */
/*   Updated: 2021/05/27 11:22:44 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fill(char *res, int n, int i)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		res[c] = '-';
		c++;
	}
	res[i] = '\0';
	while (i != c)
	{
		if (n < 0)
			res[i - 1] = ((n % 10) * -1) + 48;
		else
			res[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*res;

	j = n;
	i = 0;
	if (n <= 0)
		i = 1;
	while (j != 0)
	{
		i++;
		j = j / 10;
	}
	res = (char *)malloc((i + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	return (ft_fill(res, n, i));
}
