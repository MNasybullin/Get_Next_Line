/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_max.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:57:39 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/14 18:03:58 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_max(int *tab, unsigned int len)
{
	int	max;

	if (!len)
	{
		return (0);
	}
	max = tab[len];
	while (len--)
	{
		if (tab[len] > max)
			max = tab[len];
	}
	return (max);
}
