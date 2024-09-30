#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = 0;
		i++;
	}
}

int main (void)
{
	unsigned char str[15] = "hello my world";
	int	i;

	i = 0;
        printf("%s\n", str);
        ft_bzero((void *)str, 6);
	while (i < 15)
	{
		if (str[i] == '\0')
        		printf("%s", "\\0");
		else
			printf("%c", str[i]);
		i++;
	}
}
