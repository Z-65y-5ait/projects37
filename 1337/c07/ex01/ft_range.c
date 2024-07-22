#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;

	i = 0;
	if (min >= max)
		return (NULL);
	str = (int *)malloc(sizeof(*str) * (max - min));
	if (!str)
		return (NULL);
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
