/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:22:26 by jmacedo-          #+#    #+#             */
/*   Updated: 2025/04/03 22:54:07 by jmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST

# include <stdio.h>

#endif

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	if (size == 0 || size == 1)
	{
		return ;
	}
	j = 1;
	temp = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

#ifdef TEST

int	main(void)
{
	int	tab[5];
	int	j;

	tab[0] = 7;
	tab[1] = 3;
	tab[2] = 1;
	tab[3] = 9;
	tab[4] = 5;
	j = 0;
	ft_sort_int_tab(tab, 5);
	while (j <= 4)
	{
		printf("%i", tab[j]);
		j++;
	}
	return (0);
}

#endif
