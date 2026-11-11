/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurlan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:03:59 by rfurlan-          #+#    #+#             */
/*   Updated: 2025/04/10 13:36:14 by rfurlan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	len = 0;
	while (src[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
/*
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

int	main(void)
{
	char	original[] = "Hello World!";
	char	*copy = ft_strdup(original);

	if (copy == NULL)
	{
		ft_putstr ("Error: fail in memory allocation \n");
		return (1);
	}

	ft_putstr ("Original String: ");
	ft_putstr (original);
	ft_putstr ("\n");

	ft_putstr("Duplicated String: ");
	ft_putstr(copy);
	ft_putstr("\n");

	original[0] = 'G';
	original[1] = 'o';
	original[2] = 'o';
	original[3] = 'd';
	original[4] = 'b';
	original[5] = 'y';
	original[6] = 'e';

	ft_putstr("Original string modified: ");
	ft_putstr(original);
	ft_putstr("\n");

	ft_putstr("Duplicated string not modified: ");
	ft_putstr(copy);
	ft_putstr("\n");

	free (copy);
	return (0);
}*/
