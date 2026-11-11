/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:36:32 by jmacedo-          #+#    #+#             */
/*   Updated: 2025/03/27 11:33:13 by jmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST

# include <stdio.h>
# include <unistd.h>

#endif

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#ifdef TEST

int	main(void)
{
	int	x;

	x = 10;
	printf("Before:%i%s", x, "\n");
	ft_ft(&x);
	printf("After:%i%s", x, "\n");
	return (0);
}

#endif
