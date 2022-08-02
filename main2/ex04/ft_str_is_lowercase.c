#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	printf("%d", ft_str_is_lowercase("adslfkdsffdsr"));
	printf("\n%d", ft_str_is_lowercase("abccdaAFFAfas"));
	printf("\n%d", ft_str_is_lowercase("-_12312rerDSA54"));
}
