#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;

	len = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*strstr;
	int				i;

	strstr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!strstr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		strstr[i].size = ft_strlen(av[i]);
		strstr[i].str = av[i];
		strstr[i].copy = ft_strdup(av[i]);
		i++;
	}
	strstr[i].str = 0;
	return (strstr);
}
