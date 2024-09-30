#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	if(ft_isascii('e') == 0)
		write(1, "no", 2);
	else
		write(1, "yes", 3);
	return (0);
}
