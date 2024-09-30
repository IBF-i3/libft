#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i]  = (unsigned char) c;
		i++;
	}
	return (s);
}

int main()
{
	 unsigned char str[15] = "hello my world";
	
	if (!ft_memset((void *)str, 'a', 6))
		printf("An error occurred in my_memset()\n");
	else
		printf("%s\n", str);
}
