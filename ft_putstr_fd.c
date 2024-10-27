/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:05:21 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/19 18:05:44 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
int	main()
{
	char	*str1;
	//char	*str2;
	int	fd;

	str1 = "Hello my friend!";
	//str2 = "How are you?";
	fd = 1;
	ft_putstr_fd(str1, fd);
	//ft_putstr_fd(str2, fd);
	return (0);
}*/
