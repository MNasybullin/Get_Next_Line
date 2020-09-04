/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 11:50:14 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/14 17:14:50 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char*)dst;
	b = (const unsigned char*)src;
	if (a || b)
	{
		while (n > 0)
		{
			*(a++) = *(b++);
			n--;
		}
	}
	return (dst);
}
