/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athaeter <athaeter@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:58:41 by athaeter          #+#    #+#             */
/*   Updated: 2025/04/09 14:59:08 by athaeter         ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	if (range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (len);
}

/*int main(void)
{
	int *arr;
	int size;
	int i;

	size = ft_ultimate_range(&arr, 3, 10);

	if (size == -1)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}
	else if (size == 0)
	{
		printf("Invalid range. min >= max\n");
		return 0;
	}

	printf("Generated array of size %d:\n", size);
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	free(arr);
	return 0;
}*/
