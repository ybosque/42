//#include "libft.h"
#include <stdlib.h>

int		ft_absolute(int n)
{
	if (n == -2147483648)
		return (0);
	if (n < 0)
		n *= -1;
	return (n);
}

int		intlen(int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

/*char	*ft_itoa(int n)
{
	int		i;
	int		c;
	int		j;
	int		flag;
	char	*str;

	if (n == -2147483648)
		return ("-2147483648");
	c = ft_absolute(n);
	if (!(str = malloc(sizeof(int) * intlen(c) + 2)))
		return (0);
	j = 0;
	if (n < 0)
		str[j++] = '-';
	flag = 0;
	i = 1000000000;
	while (i >= 1)
	{
		if (flag == 1 || (flag == 0 && c / i != 0) || (c == 0 && i == 1))
		{
			if (c >= 1000000000 && i == 1000000000)
				str[j++] = c / i + '0';
			else
				str[j++] = (c % (10 * i) / i + '0');
			flag = 1;
		}
		i /= 10;
	}
	return (str);
}*/

char	*itoa(int c, char *str, int j)
{
	int		flag;
	int		i;

	flag = 0;
	i = 1000000000;
	while (i >= 1)
	{
		if (flag == 1 || (flag == 0 && c / i != 0) || (c == 0 && i == 1))
		{
			if (c >= 1000000000 && i == 1000000000)
				str[j++] = c / i + '0';
			else
				str[j++] = (c % (10 * i) / i + '0');
			flag = 1;
		}
		i /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		c;
	int		j;
	char	*str;

	if (n == -2147483648)
		return ("-2147483648");
	c = ft_absolute(n);
	if (!(str = malloc(sizeof(int) * intlen(c) + 2)))
		return (0);
	j = 0;
	if (n < 0)
		str[j++] = '-';
	return (itoa(c, str, j));
}

int		main(int ac, char **av)
{
	printf("%s\n", ft_itoa(atoi(av[1])));
}
