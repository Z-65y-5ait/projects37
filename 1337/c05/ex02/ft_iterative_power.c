#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	pwr;

	pwr = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		pwr = pwr * nb;
		power--;
	}
	return (pwr);
}
