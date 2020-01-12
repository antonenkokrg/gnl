/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:30:57 by ilya              #+#    #+#             */
/*   Updated: 2019/10/23 13:27:40 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = n * -1;
	}
	else
		nbr = n;
	if (nbr >= 10)
		ft_putnbr_fd((nbr / 10), fd);
	ft_putchar_fd((nbr % 10 + 48), fd);
}
