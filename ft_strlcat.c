/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <mel-moud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:06:50 by mel-moud          #+#    #+#             */
/*   Updated: 2024/11/13 10:20:15 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	l_src;
	size_t	l_dest;
	size_t	i;

	l_src = ft_strlen(src);
	if (size == 0)
		return (l_src);
	l_dest = ft_strlen(dest);
	if (size <= l_dest)
		return (size + l_src);
	i = 0;
	while (src[i] && (l_dest + i) < (size - 1))
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_dest + l_src);
}
