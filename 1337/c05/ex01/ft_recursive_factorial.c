#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		fact = nb * ft_recursive_factorial(nb - 1);
		return (fact);
	}
	return (0);
}
