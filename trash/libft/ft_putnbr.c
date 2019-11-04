//#include "libft.h"
#include <unistd.h>

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
}

int		ft_absolute(int n)
{
	if (n == -2147483648)
		return (0);
	if (n < 0)
		n *= -1;
	return (n);
}

void	ft_putnbr(int n)
{
	int		c;
	int		i;
	char	flag;

	if (n == -2147483648)
		flag = 2;
	if (n < 0 && flag != 2)
		ft_putchar('-');
	flag = 0;
	i = 1000000000;
	c = ft_absolute(n);
	while (i >= 1 && flag != 2)
	{
		if (flag == 1 || (flag == 0 && c / i != 0) || (c == 0 && i == 1))
		{
			if (c >= 1000000000)
				ft_putchar(c / i + '0');
			else
				ft_putchar((c % (10 * i)) / i + '0');
			flag = 1;
		}
		i /= 10;
	}
	if (flag == 2)
		ft_putstr("-2147483648");
}

int		main(int ac, char **av)
{
	ft_putnbr(atoi(av[1]));
}
