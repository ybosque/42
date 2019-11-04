//#include "libft.h"
#include <unistd.h>

int		ft_absolute(int n)
{
	if (n == -2147483648)
		return (0);
	if (n < 0)
		n *= -1;
	return (n);
}

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(int fd, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar_fd(fd, str[i]);
}

void	ft_putendl_fd(int fd, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar_fd(fd, str[i]);
	ft_putchar_fd(fd, '\n');
}

void	ft_putnbr_fd(int fd, int n)
{
	int		c;
	int		i;
	char	flag;

	if (n == -2147483648)
		flag = 2;
	if (n < 0 && flag != 2)
		ft_putchar_fd(fd, '-');
	flag = 0;
	i = 1000000000;
	c = ft_absolute(n);
	while (i >= 1 && flag != 2)
	{
		if (flag == 1 || (flag == 0 && c / i != 0) || (c == 0 && i == 1))
		{
			if (c >= 1000000000)
				ft_putchar_fd(fd, c / i + '0');
			else
				ft_putchar_fd(fd, (c % (10 * i)) / i + '0');
			flag = 1;
		}
		i /= 10;
	}
	if (flag == 2)
		ft_putstr_fd(fd, "-2147483648");
}
