/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:44:07 by ilya              #+#    #+#             */
/*   Updated: 2019/10/23 13:28:53 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*strstr;
	size_t	length;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	str = (char*)malloc((length) + 1);
	if (str == NULL)
		return (NULL);
	strstr = str;
	while (*s1 != '\0')
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = '\0';
	return (strstr);
}
