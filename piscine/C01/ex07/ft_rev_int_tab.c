/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:26:11 by jmacedo-          #+#    #+#             */
/*   Updated: 2025/04/03 22:34:13 by jmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST

# include <stdio.h>

#endif

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	if (size == 0 || size == 1)
	{
		return ;
	}
	i = 0;
	while (i <= (size / 2) - 1)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

#ifdef TEST

int	main(void)
{
	int	tab[5];
	int	j;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	j = 0;
	ft_rev_int_tab(tab, 5);
	while (j <= 4)
	{
		printf("%i", tab[j]);
		j++;
	}
	return (0);
}

#endif
