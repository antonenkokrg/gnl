/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:23:40 by ilya              #+#    #+#             */
/*   Updated: 2019/10/23 13:26:04 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	if (!content)
	{
		new_node->content = (void *)content;
		new_node->content_size = 0;
	}
	else
	{
		new_node->content = (void *)malloc(content_size);
		if (!new_node->content)
			return (NULL);
		ft_memcpy(new_node->content, content, content_size);
		new_node->content_size = content_size;
	}
	new_node->next = NULL;
	return (new_node);
}
