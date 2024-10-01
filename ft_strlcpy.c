#include <stdio.h>
#include "libft.h"

void	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	if (size < 1)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest = '\0';
	return (len);
	}
}

int	main(void)
{
	char	a[] = "Hola mundo!";
	char	b[14];

	ft_strlcpy(b, a);
	printf("%lu,\n", ft_strlcpy);
	return (0);
}
