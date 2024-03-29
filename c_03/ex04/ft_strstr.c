/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaktas <aaktas@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:49:32 by aaktas            #+#    #+#             */
/*   Updated: 2022/08/03 17:28:16 by aaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	if (to_find[g] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + g] == to_find[g] && str[i + g] != '\0')
			g++;
		if (to_find[g] == '\0')
			return (str + i);
		i++;
		g = 0;
	}
	return (0);
}
