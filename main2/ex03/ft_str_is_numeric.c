#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str [i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	printf("%d", ft_str_is_numeric("0123434225"));
	printf("\n%d", ft_str_is_numeric("002423023jd432"));
	printf("\n%d", ft_str_is_numeric("-_fdsafaf67545da,"));
}
