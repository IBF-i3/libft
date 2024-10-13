/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 05:41:06 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/01 07:25:35 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main() {
    char dest[14];
    const char *source = "Hello, world!";
    
    size_t result1 = ft_strlcpy(dest, source, sizeof(dest));
    printf("Copied string: '%s'\n", dest);
    printf("Length of source: %zu\n\n", result1);

    char dest2[14];
    size_t result2 = ft_strlcpy(dest2, source, 0);
    printf("Copied string (size 0): '%s'\n", dest2);
    printf("Length of source (size 0): %zu\n", result2);

    return 0;
}*/
