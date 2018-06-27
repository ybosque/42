#include <unistd.h>

char	**ft_strsplit(const char *str, char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
	ft_putchar('\n');
}

void	print(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		ft_putstr(tab[i]);
}

int		main(int ac, char **av)
{
	print(ft_strsplit(av[1], av[2][0]));
}
