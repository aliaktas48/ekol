/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:43:02 by aaktas            #+#    #+#             */
/*   Updated: 2022/07/22 11:54:13 by aaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	sayi;

	sayi = '0';
	while (sayi <= '9')
	{
		write(1, &sayi, 1);
		sayi++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
