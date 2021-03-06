/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:51:00 by mbucci            #+#    #+#             */
/*   Updated: 2021/11/29 15:54:26 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *s)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] && s[i] >= 9 && s[i] <= 13)
		i++;
	while (s[i])
	{
		if (s[i] > 57 || s[i] < 48)
			return (-1);
		n = n * 10 + s[i] - 48;
		i++;
	}
	return (n);
}
