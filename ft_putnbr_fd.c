#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr_fd((n / 10), fd);
	ft_putchar_fd((n + '0'), fd);
}

int	main()
{
	ft_putnbr_fd(10, 1);
}
