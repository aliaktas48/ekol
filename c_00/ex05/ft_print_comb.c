/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:37:20 by aaktas            #+#    #+#             */
/*   Updated: 2022/07/23 20:40:18 by aaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a++ <= '7')
	{
		b = a +1;
		while (b <= '8')
		{
			c = b +1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				if (!(a == '7' && b == '8' && c == '9'))
				{	
					write (1, ", ", 2);
				}
				c++;
			}
			b++;
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
