/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <mel-moud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:24:45 by mel-moud          #+#    #+#             */
/*   Updated: 2024/11/13 12:58:00 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	b;
	void	*p;

	if (nmemb * size > SIZE_MAX)
		return (NULL);
	b = nmemb * size;
	p = malloc(b);
	if (!p)
		return (NULL);
	ft_bzero(p, b);
	return (p);
}
