/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:24:19 by aaktas            #+#    #+#             */
/*   Updated: 2022/08/09 19:30:33 by aaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	w;

	w = 1;
	while (w < ac)
	{
		i = 0;
		while (av[w][i] != '\0')
		{
			ft_putchar(av[w][i]);
			i++;
		}
		ft_putchar('\n');
		w++;
	}
	return (0);
}
