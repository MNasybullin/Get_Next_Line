/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:51:17 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/14 17:15:31 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst,
		const void *src, int c, size_t n)
{
	int					i;
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char*)dst;
	b = (const unsigned char*)src;
	i = 0;
	while (n--)
	{
		a[i] = b[i];
		if (a[i] == (unsigned char)c)
			return (dst + 1 + i);
		i++;
	}
	return (NULL);
}
