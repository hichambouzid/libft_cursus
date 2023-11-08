/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:23:47 by hibouzid          #+#    #+#             */
/*   Updated: 2023/11/08 14:46:48 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

int ft_devis(long number)
{
	int		count;

	if (number < 10)
		return (1);
	count = 0;
	while (number >= 10)
	{
		number /= 10;
		count++;
	}
	return (count + 1);
}

char *ft_itoa(int n)
{
	long number;
	int sign;
	char *b;
	int count;

	sign = 1;
	count = 0;
	number = (long)n;
	if (number < 0)
	{
		number *= -1;
		sign *= -1;
		count += 1;
	}
	count += ft_devis(number);
	b = malloc(sizeof(char) * (count + 1));
	if (!b)
	return (NULL);
	// printf("the number allocet is %d\n", count);
	b[count] = 0;
	count--;
	if (sign == -1)
	b[0] = '-';
	while (number >= 10 && count)
	{
		b[count] = number % 10 + 48;
		number /= 10;
		count--;
	}
	b[count] = number + 48;
	return (b);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s\n", ft_itoa(10));
// }
