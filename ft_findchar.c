/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:57:58 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/29 20:59:29 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_findchar(char c, char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return (1);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}