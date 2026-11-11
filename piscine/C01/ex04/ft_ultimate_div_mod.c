/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:57:22 by jmacedo-          #+#    #+#             */
/*   Updated: 2025/04/03 16:04:09 by jmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST

# include <stdio.h>

#endif

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

#ifdef TEST

int	main(void)
{
	int	a;
	int	b;

	a = 16;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("div:%i ", a);
	printf("mod:%i ", b);
	return (0);
}

#endif
