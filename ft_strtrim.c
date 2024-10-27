/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:32:43 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/27 22:14:18 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	s1_len = ft_strlen(s1);
	while (i < s1_len && ft_strrchr(set, s1[s1_len - 1]))
		s1_len--;
	return (ft_substr(s1, i, s1_len - i));
}
/*
int	main(void)
{
	char	*str;
	char	*trim;
	char	*str_trimmed;

	str = "Hello my friend!";
	trim = "my friend!";
	str_trimmed = ft_strtrim(str, trim);
	if (str_trimmed == NULL)
	{
		printf("Error: function returned NULL\n");
		return (1);
	}
	printf("Original string: %s\n", str);
	printf("Set to trim: %s\n", trim);
	printf("Trimmed string: %s\n", str_trimmed);
	free(str_trimmed);
	return (0);
}*/
