#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	main(void)
{
	if (ft_isalnum('&') == 0)
		write(1, "no", 2);
	else
		write(1, "yes", 3);
	return (0);
}
