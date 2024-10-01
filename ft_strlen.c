/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 02:06:15 by ibenaven          #+#    #+#             */
/*   Updated: 2024/09/27 02:07:49 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
void	ft_putchar(char b)
{
	write(1, &b, 1);
}

int	main(void)
{
	char	*a;
	int		len;

	a = "ttttttttttttttttttttttttttttttttttttttttttttttt";
	len = ft_strlen(a);
	if (len > 9)
	{
		ft_putchar((len / 10) + '0');
		ft_putchar((len % 10) + '0');
	}
	else
		ft_putchar(len + '0');
	return (0);
}*/
