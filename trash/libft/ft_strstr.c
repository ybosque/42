//#include "libft.h"
#include <stdio.h>

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

const char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	if (!(ft_strcmp((char *)needle, "")))
		return (haystack);
	i = -1;
	while (haystack[++i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (j == ft_strlen((char *)needle) - 1)
			return (&haystack[i]);
	}
	return (0);
}

int			main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strstr(av[1], av[2]));
}
