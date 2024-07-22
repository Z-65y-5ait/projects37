#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	while (i * i <= nb)
		i++;
	i--;
	if (i * i == nb)
		return (i);
	return (0);
}
