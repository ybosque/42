//#include "libft.h"
#include <stdlib.h>

int		ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	if (!(dest = malloc(ft_strlen(str) + 1)))
	i = -1;
	while (str[++i])
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}

int		ft_count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if ((i == 0 && str[i] != c) || (str[i - 1] == c && str[i] != c))
		{
			while (str[i] != c)
				i++;
			while (str[i] == c)
				i++;
			count++;
		}
	}
	return (count);
}

char	**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		wlen;
	char	**dest;

	i = 0;
	j = 0;
	if (!(dest = malloc(ft_count_words(str, c) + 1)))
		return (0);
	while (str[i] && j < ft_count_words(str, c))
	{
		while (str[i] == c)
			i++;
		if ((i == 0 && str[i] != c) || (str[i - 1] == c && str[i] != c))
		{
			wlen = 1;
			while (str[i + wlen] != c)
				wlen++;
			if (!(dest[j] = malloc(sizeof(char *) * ft_strlen(str))))
				return (0);
			while (wlen >= 1 && str[i] != c)
			{
				dest[j][wlen - 1] = str[i + wlen - 1];
				wlen--;
			}
			j++;
		}
		i++;
	}
	dest[j] = 0;
	return (dest);
}
