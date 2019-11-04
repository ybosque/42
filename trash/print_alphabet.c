void	ft_putchar(char c);

void	print_alphabet(void)
{
char	c;

c = 96;
while (++c != 123)
	ft_putchar(c);
ft_putchar('\n');
}

int		main()
{
	print_alphabet();
	return (0);
}
