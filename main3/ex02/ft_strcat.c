#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	g;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	g = 0;
	while (src[g] != '\0')
	{
		dest[i] = src[g];
		i++;
		g++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char	src[] = "ali";
	char	dest[] = "aktas";
	printf("%s", ft_strcat(src, dest));
}
