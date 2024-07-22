#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			&& (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
			&& (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				&& (str[i] >= 'a' && str[i] <= 'z')))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
