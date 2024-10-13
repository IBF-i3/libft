/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:48:38 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/13 19:21:23 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char 	big[13] = "Hello world!";
	char	little[6] = "world";
	char	*result = ft_strnstr(big, little, sizeof(big));

	printf("%p\n", result);
	printf("%p\n", &big[6]);
	printf("%s\n", result);
	printf("%s\n", &big[6]);

	char	little2[0] = "";
	char	*result2 = ft_strnstr(big,little2, sizeof(big));
	
	printf("%p\n", result2);
	printf("%p\n", big);
	printf("%s\n", result2);
	printf("%s\n", big);
	return (0);
}*/
