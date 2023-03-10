/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:55:06 by iragusa           #+#    #+#             */
/*   Updated: 2022/11/06 19:55:15 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr_fd(char *s, int n, int fd)
{
	while (*s && n)
	{
		ft_putchar_fd(*s, fd);
		s++;
		n--;
	}
}
