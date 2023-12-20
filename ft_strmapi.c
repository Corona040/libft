/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:32:26 by ecorona-          #+#    #+#             */
/*   Updated: 2023/12/20 13:26:17 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	size_t	i;

	mapi = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!mapi)
		return (0);
	i = 0;
	while (*(s + i))
	{
		*(mapi + i) = f((unsigned int) i, *(s + i));
		i++;
	}
	return (mapi);
}
