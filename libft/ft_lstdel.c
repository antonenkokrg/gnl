/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:28:21 by ilya              #+#    #+#             */
/*   Updated: 2019/10/23 13:25:33 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *swap;
	t_list *t;

	swap = *alst;
	t = *alst;
	while (t != NULL)
	{
		(*del)(swap->content, swap->content_size);
		swap = t->next;
		free(t);
		t = swap;
	}
	*alst = NULL;
}
