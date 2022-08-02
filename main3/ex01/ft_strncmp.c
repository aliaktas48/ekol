#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int	main()
{
	printf("%d", ft_strncmp("berkay", "berka", 3));
	printf("\n%d", ft_strncmp("berkay", "berka", 6));
	printf("\n%d", ft_strncmp("ber", "berkay", 6));
	printf("\n%d", ft_strncmp("berk", "arda", 4));
}
