/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:51:37 by aaktas            #+#    #+#             */
/*   Updated: 2022/08/09 17:17:46 by aaktas           ###   ########.fr       */
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
			b++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	while (ft_is_prime(nb) == 0)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (nb);
}
