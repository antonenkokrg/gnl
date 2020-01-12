/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:16:38 by ilya              #+#    #+#             */
/*   Updated: 2019/10/23 13:26:46 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	if (src == dst)
		return (dst);
	csrc = (char *)src;
	cdst = (char *)dst;
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			cdst[i] = csrc[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
