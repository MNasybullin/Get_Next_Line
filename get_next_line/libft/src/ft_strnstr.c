/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:33:05 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/15 12:44:40 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len_needle;

	str = (char *)haystack;
	if ((len_needle = ft_strlen(needle)) == 0)
		return ((char *)haystack);
	if (ft_strlen(haystack) < len_needle || len < len_needle)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && i <= len - len_needle)
	{
		j = 0;
		while (needle[j] && needle[j] == str[j + i])
			j++;
		if (j == len_needle)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
