/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:02:43 by ilya              #+#    #+#             */
/*   Updated: 2019/10/23 13:26:34 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)dest;
	str2 = (char *)src;
	if (!n || dest == src)
		return (dest);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}
