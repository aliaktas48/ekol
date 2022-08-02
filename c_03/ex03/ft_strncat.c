/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:56:03 by aaktas            #+#    #+#             */
/*   Updated: 2022/08/02 20:09:15 by aaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
