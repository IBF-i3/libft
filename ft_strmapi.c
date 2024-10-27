/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:24:25 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/19 20:48:19 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	str = ft_calloc(s_len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*
char	transform(unsigned int i, char c)
{
	return (c + i);
}

int	main()
{
	char const	s[6] = "hello\0";
	char	*result;

	result = ft_strmapi(s, transform);
	if (result == NULL)
	{
		printf("Error: function returned NULL\n");
		return (1);
	}
	if (result)
	{
        	printf("Original string: %s\n", s);
        	printf("Transformed string: %s\n", result);
        	free(result);
	}
	return (0);
}*/
