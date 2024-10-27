/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:58:20 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/19 18:02:25 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int	main()
{
	char	*str1;
	char	*str2;
	int	fd;

	str1 = "Hello my friend!";
	str2 = "How are you?";
	fd = 1;
	ft_putendl_fd(str1, fd);
	ft_putendl_fd(str2, fd);
	return (0);
}*/
