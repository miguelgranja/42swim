/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:40:09 by jmacedo-          #+#    #+#             */
/*   Updated: 2025/03/29 21:27:51 by jmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST

# include <stdio.h>
# include <unistd.h>

#endif

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#ifdef TEST

int	main(void)
{
	int		x;
	void	*pointers[9];
	int		*********px;
	int		i;

	x = 0;
	pointers[0] = &x;
	i = 1;
	while (i < 9)
	{
		pointers[i] = &pointers[i - 1];
		i++;
	}
	px = (int *********)pointers[8];
	*********px = 10;
	printf("Before: %i\n", *********px);
	ft_ultimate_ft(px);
	printf("After: %i\n", *********px);
	return (0);
}

#endif
