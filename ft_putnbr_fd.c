/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:32:43 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/19 20:05:10 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd(nbr + '0', fd);
}
/*
int	main()
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;
	int	n5;

	n1 = 2147483647;
	n2 = -2147483648;
	n3 = -2147483649;
	n4 = 2147483648;
	n5 = 0;
	ft_putstr_fd("Int max: ", 1);
	ft_putnbr_fd(n1, 1);
	ft_putendl_fd("", 1);
	ft_putstr_fd("Int min: ", 1);
	ft_putnbr_fd(n2, 1);
	ft_putendl_fd("", 1);
	ft_putstr_fd("Int min underflow: ", 1);
	ft_putnbr_fd(n3, 1);
	ft_putendl_fd("", 1);
	ft_putstr_fd("Int max overflow: ", 1);
	ft_putnbr_fd(n4, 1);
	ft_putendl_fd("", 1);
	ft_putstr_fd("Zero: ", 1);
	ft_putnbr_fd(n5, 1);
	ft_putendl_fd("", 1);
	return (0);

}*/
