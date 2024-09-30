#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	main(void)
{
	if (ft_isalpha('c') == 0)
		write(1, "no", 3);
	else
		write(1, "yes", 2);
	return (0);
}
