/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:32:43 by ibenaven          #+#    #+#             */
/*   Updated: 2024/10/19 20:05:10 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nlen(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nbr;
	size_t	len;
	char	*str;

	nbr = n;
	len = ft_nlen(nbr);
	str = ft_calloc (len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	len--;
	while (nbr != 0)
	{
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	return (str);
}
/*
int	main()
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	char	*str6;

	str1 = ft_itoa(2147483647);
	str2 = ft_itoa(-2147483648);
	str3 = ft_itoa(-2000000648);
	str4 = ft_itoa(-2147483649);
	str5 = ft_itoa(2147483648);
	str6 = ft_itoa(0);
	if (str1 == NULL || str2 == NULL || str3 == NULL ||
		str4 == NULL || str5 == NULL || str6 == NULL)
	{
		printf("Error: function returned NULL\n");
		return (1);
	}
	printf("Int max: %s\n", str1);
	printf("Int min; %s\n", str2);
	printf("Zero inbetween: %s\n", str3);
	printf("Int min underflow: %s\n", str4);
	printf("Int max overflow: %s\n", str5);
	printf("Zero: %s\n", str6);
	free(str1);
	free(str2);
	free(str3);
	free(str4);
	free(str5);
	free(str6);
	return (0);
}*/
