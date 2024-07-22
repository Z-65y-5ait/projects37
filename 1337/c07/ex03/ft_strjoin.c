#include <stdlib.h>

char	*ft_zero(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (!str)
		return (0);
	str[0] = '\0';
	return (str);
}

char	*ft_alloc(char **stress, int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		l;

	k = 0;
	l = 0;
	while (sep[l] != '\0')
		l++;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			k++;
			j++;
		}
	    i++;
	}
	*stress = (char *)malloc(k + (size - 1) * l + 1);
	return (*stress);
}

char	*ft_cc(int size, char **strs, char *sep, char *stress)
{
	int		i;
	int		j;
	int		l;
	int		k;

	j = 0;
	l = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
			stress[l++] = strs[j][i++];
		if (j < size - 1)
		{
			k = 0;
			while (sep[k] != '\0')
				stress[l++] = sep[k++];
		}
		j++;
	}
	stress[l] = '\0';
	return (stress);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*stress;

	if (size <= 0)
		return (ft_zero());
	if (ft_alloc(&stress, size, strs, sep) == NULL)
		return (NULL);
	return (ft_cc(size, strs, sep, stress));
}
