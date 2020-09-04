/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:03:40 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/12 11:43:53 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;

	len = 0;
	while (s1[len])
	{
		len++;
	}
	s2 = (char *)malloc(sizeof(*s1) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	while (len >= 0)
	{
		s2[len] = s1[len];
		len--;
	}
	return (s2);
}
