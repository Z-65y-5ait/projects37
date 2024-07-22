#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	str;

	str = 'z';
	while (str >= 'a')
	{
		write(1, &str, 1);
		str--;
	}
}
