#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	size_t	i;

	i = 0;
	temp = (unsigned char *)src;
	while (i < n)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}

int main()
{
        char str[15] = "hello my world";
        const char ptr[8] = "Rstudio";

        if (!ft_memmove((void *)str, (const void *)ptr, 5))
                printf("An error occurred in ft_memmove()\n");
        else
                printf("%s\n", str);
}
