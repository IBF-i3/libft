#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main(void)
{
	if (ft_isprint(2) == 0)
		write(1, "no", 2);
	else
		write(1, "yes", 3);
}
