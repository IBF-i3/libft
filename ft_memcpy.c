#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i]; 
		i++;
	}
	return (dest);
}

int main()
{
        char str[15] = "hello my world";
	const char ptr[8] = "Rstudio";

        if (!ft_memcpy((void *)str, (const void *)ptr, 5))
                printf("An error occurred in ft_memcpy()\n");
        else
                printf("%s\n", str);
}
