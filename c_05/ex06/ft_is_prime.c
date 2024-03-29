/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:19:32 by aaktas            #+#    #+#             */
/*   Updated: 2022/08/09 16:46:54 by aaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	b;

	b = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (b <= (nb / 2))
	{
		if (!(nb % b))
			return (0);
		else
			b += 1;
	}
	return (1);
}
