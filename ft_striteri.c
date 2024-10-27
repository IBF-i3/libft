/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:32:43 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/19 20:05:10 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	print_str(unsigned int j, char *s2)
{
	ft_putnbr_fd(j, 1);
	ft_putstr_fd(" = ", 1);
	ft_putendl_fd(s2, 1);
}

int	main()
{
	char	*str;
	
	str = malloc(5 * sizeof(char));
	if (str == NULL)
		return (1);
	str = "abcde";
	ft_striteri(str, print_str);
	return (0);
}*/
