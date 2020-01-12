/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:35:27 by ilya              #+#    #+#             */
/*   Updated: 2019/10/23 13:30:02 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s_len = (len - start) + 1;
	i = 0;
	str = (char*)malloc((len) + 1);
	if (str == NULL)
		return (NULL);
	while (len > 0 && *s != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	if (str == NULL)
		return (NULL);
	return (str);
}
