/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:08:22 by jmacedo-          #+#    #+#             */
/*   Updated: 2025/04/08 19:12:56 by jmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST

# include <stdio.h>

#endif

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			str++;
		}
		else if (*str >= 'a' && *str <= 'z')
		{
			str++;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (1);
}

#ifdef TEST
/*
int	main (void)
{
	char	*lol;

	lol = "5645';[6";
	ft_str_is_alpha (lol);
	return (0);
}
*/
#endif
