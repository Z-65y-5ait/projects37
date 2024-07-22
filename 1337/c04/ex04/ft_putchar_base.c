#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	in_arg(char *src)
{
	int	i;
	int	j;

	i = 0;
	if (src[0] == '\0' || src[1] == '\0')
		return (1);
	while (src[i] != '\0')
	{
		if (src[i] == '+' || src[i] == '-')
			return (1);
		j = i + 1;
		while (src[j] != '\0')
		{
			if (src[i] == src[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		div;
	long	n;

	div = 0;
	while (base[div] != '\0')
		div++;
	if (in_arg(base) || div < 2)
	{
		write(1, "base undefined", 14);
	}
	else
	{
		n = nbr;
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n >= div)
			ft_putnbr_base(n / div, base);
		ft_putchar(base[n % div]);
	}
}
