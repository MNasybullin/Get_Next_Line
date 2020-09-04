/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:38:43 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/13 15:30:44 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	a;
	int	b;

	b = n % 10;
	n = n / 10;
	if (b < 0 || n < 0)
	{
		ft_putchar('-');
		n = -n;
		b = -b;
	}
	if (n != 0)
	{
		a = 1;
		while (a * 10 <= n)
			a = a * 10;
		while (a != 0)
		{
			ft_putchar(n / a % 10 + '0');
			a = a / 10;
		}
	}
	ft_putchar(b + '0');
}
