/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:04:18 by ecorona-          #+#    #+#             */
/*   Updated: 2024/10/24 02:01:41 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man memcpy
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == 0 || src == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		ft_memset(dest + i, *(char *)(src + i), 1);
		i++;
	}
	return (dest);
}
