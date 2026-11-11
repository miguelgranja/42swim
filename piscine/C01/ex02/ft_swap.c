/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:10:56 by jmacedo-          #+#    #+#             */
/*   Updated: 2025/04/03 22:10:12 by jmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST

# include <stdio.h>

#endif

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#ifdef TEST

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 9;
	printf("a:%i b:%i ", a, b);
	ft_swap(&a, &b);
	printf("a:%i b:%i", a, b);
	return (0);
}

#endif
