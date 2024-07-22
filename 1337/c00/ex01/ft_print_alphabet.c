#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	str;

	str = 'a';
	while (str <= 'z' )
	{
		write(1, &str, 1);
		str++;
	}
}
