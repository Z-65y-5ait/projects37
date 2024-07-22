#include <unistd.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	while (argc - 1 > 0)
	{
		write(1, argv[argc - 1], ft_strlen(argv[argc - 1]));
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
