/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:22:45 by aaktas            #+#    #+#             */
/*   Updated: 2022/07/24 12:34:35 by aaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	w;

	if (nb >= 0 && nb < 10)
	{
		w = nb + 48;
		ft_putchar(w);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else
	{	
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	ft_putnbr(42);
}
