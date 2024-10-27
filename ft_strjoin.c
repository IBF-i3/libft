/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:32:43 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/19 20:05:10 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3 = ft_calloc((s1_len + s2_len) + 1, sizeof(char));
	if (s3 == NULL)
		return (NULL);
	ft_strlcpy(s3, s1, s1_len + 1);
	ft_strlcpy(&s3[s1_len], s2, s2_len + 1);
	return (s3);
}
/*
int	main()
{
	char	*str1;
	char	*str2;
	char	*str3;
	//int	fd;

	str1 = "Hello ";
	str2 = "my friend!";
	str3 = ft_strjoin(str1, str2);
	//fd = 1;
	if (str3 == NULL)
	{
		printf("Error: function returned NULL\n");
		return (1);
	}
	printf("Original first string: %s\n", str1);
	printf("Original second string: %s\n", str2);
	printf("New string: %s\n", str3);
	//ft_putendl_fd(str3, fd);
	free(str3);
	return (0);
}*/
