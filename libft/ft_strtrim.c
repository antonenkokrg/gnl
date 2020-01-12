/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:47:00 by ilya              #+#    #+#             */
/*   Updated: 2019/10/23 13:30:07 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	min;
	size_t	max;
	size_t	len;

	if (!s)
		return (NULL);
	min = 0;
	while (s[min] != '\0'
			&& (s[min] == ' ' || s[min] == '\n' || s[min] == '\t'))
		min++;
	max = ft_strlen(s);
	while (min < max
			&& (s[max - 1] == ' ' || s[max - 1] == '\n' || s[max - 1] == '\t'))
		max--;
	if (min == max)
		return (ft_strnew(1));
	len = max - min;
	return (ft_strsub(s, min, len));
}
