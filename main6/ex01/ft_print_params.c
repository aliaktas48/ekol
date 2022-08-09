#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	w;

	w = 1;
	while (w < ac)
	{
		i = 0;
		while (av[w][i] != '\0')
		{
			ft_putchar(av[w][i]);
			i++;
		}
		ft_putchar('\n');
		w++;
	}
	return (0);
}
