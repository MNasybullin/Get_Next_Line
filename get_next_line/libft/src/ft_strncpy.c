/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:20:58 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/10 11:50:45 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (j < len && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	while (j < len)
	{
		dst[j] = '\0';
		j++;
	}
	return (dst);
}
