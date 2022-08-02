#include <stdio.h>

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

int main()
{
	char src[] = "Ali";
	char dest[] = "Aktas";
	printf("%s", ft_strncat(src, dest, 4));
}
