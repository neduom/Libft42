/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <mel-moud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:07:43 by mel-moud          #+#    #+#             */
/*   Updated: 2024/11/13 11:36:02 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa1(long nbr)
{
	int		len;
	char	*result;

	len = ft_len(nbr);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		result[0] = '-';
	}
	while (nbr > 0)
	{
		result[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	return (ft_itoa1(n));
}
