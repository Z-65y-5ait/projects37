#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;

	if (b != 0)
	{
		temp = *a / *b;
		temp2 = *a % *b;
		*a = temp;
		*b = temp2;
	}
}
