/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:53:48 by aaktas            #+#    #+#             */
/*   Updated: 2022/07/23 13:53:58 by aaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	harf;

	harf = 'a';
	while (harf <= 'z')
	{
		write(1, &harf, 1);
		harf++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
