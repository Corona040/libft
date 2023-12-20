/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:08:13 by ecorona-          #+#    #+#             */
/*   Updated: 2023/12/20 13:26:34 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	len;

	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(s1) - start;
	while (len && ft_strrchr(set, s1[start + len]))
		len--;
	trim = ft_substr(s1, start, len + 1);
	if (!trim)
		return (0);
	return (trim);
}
