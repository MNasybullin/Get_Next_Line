/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:08:49 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/18 12:08:26 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_nbr(int n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		nbr;
	int		count;
	int		i;

	nbr = ft_count_nbr(n);
	count = 0;
	if (n < 0)
		count = 1;
	str = ft_strnew(nbr + count);
	if (str == NULL)
		return (NULL);
	i = nbr + count - 1;
	if (count == 1)
		str[0] = '-';
	while (i >= count)
	{
		if (count == 1)
			str[i--] = n % 10 * -1 + '0';
		else
			str[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
