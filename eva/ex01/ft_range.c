/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurlan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:08:38 by rfurlan-          #+#    #+#             */
/*   Updated: 2025/04/08 15:40:17 by rfurlan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int n)
{
	char	digit;
	
	if (n < 0)
	{
		ft_putchar ('-');
		if (n == -2147483648)
		{
			ft_putstr("2147483648");
			return ;
		}
		n = -n;
	}
	if (n < 10)
	{
		digit = n + '0';
		write (1, &digit, 1);
	}
	else
	{
		ft_putnbr (n / 10);
		digit = (n % 10) + '0';
		write (1, &digit, 1);
	}
}

int	main()
{
	ft_putstr("Test 1: ft_range(1, 10) \n");
	int *arr1 = ft_range(1, 10);
	if (arr1 == NULL)
	{
		ft_putstr("Error");
	}
	else
	{
		ft_putstr("Array: [");
		int i = 0;
		while (i < 9)
		{
			ft_putnbr(arr1[i]);
			if(i < 8)
			ft_putstr(", ");
			i++;
		}
		ft_putstr("]\n");
		free(arr1);
	}

}*/
