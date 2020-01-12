/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:25:38 by ilya              #+#    #+#             */
/*   Updated: 2019/10/23 13:29:14 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	if (f == NULL || s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = (char*)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (s != NULL && f != NULL)
	{
		while (i < len)
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
