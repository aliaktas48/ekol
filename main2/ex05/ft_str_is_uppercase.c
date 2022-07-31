#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	printf("%d", ft_str_is_uppercase("DSFKSDSFRF"));
	printf("\n%d", ft_str_is_uppercase("fdsafFSFDSF45"));
	printf("\n%d", ft_str_is_uppercase("ADSAFR425fsf"));
}
