/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:31:55 by aaktas            #+#    #+#             */
/*   Updated: 2022/08/09 19:50:35 by aaktas           ###   ########.fr       */
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

	i = ac - 1;
	while (i > 0)
	{
		w = 0;
		while (av[i][w] != '\0' && ac)
		{
			ft_putchar(av[i][w]);
			w++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
