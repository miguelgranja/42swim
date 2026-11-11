/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athaeter <athaeter@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:57:57 by athaeter          #+#    #+#             */
/*   Updated: 2025/04/09 14:58:06 by athaeter         ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*btw;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	btw = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (btw == NULL)
		return (NULL);
	while (min < max)
	{
		btw[i] = min;
		min++;
		i++;
	}
	return (btw);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*result;
	int	i;

	min = 4;
	max = 17;
	i = 0;
	result = ft_range(min, max);
	while (result[i] != '\0')
	{
		printf("%d",result[i]);
		i++;
	}
	return (0);
}*/
