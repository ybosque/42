void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
		ft_putchar(str[i]);
}
