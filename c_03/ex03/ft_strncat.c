/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:56:03 by aaktas            #+#    #+#             */
/*   Updated: 2022/08/03 13:49:05 by aaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	g;

	i = 0;
	g = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (g < nb && src[g] != '\0')
	{
		dest[i + g] = src[g];
		g++;
	}
	dest[i + g] = '\0';
	return (dest);
}
