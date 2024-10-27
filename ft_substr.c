/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:24:25 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/19 20:48:19 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_len;
	char	*substr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr_len = ft_strlen(&s[start]);
	if (substr_len <= len)
		len = substr_len;
	substr = ft_calloc((len + 1), sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}
/*
int	main()
{
	char	*str;
	char	*substr;
	int	start;
	size_t	len;

	str = "Hellomyfriend";
	start = 5;
	len = *str - start;
	substr = ft_substr(str, start, len);
	if (substr == NULL)
	{
		printf("Error: function returned NULL\n");
		return (1);
	}
	printf("String: %s\n", str);
	printf("Substring: %s\n", substr);
	free(substr);
	return (0);
}*/
