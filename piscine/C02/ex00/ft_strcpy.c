/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:29:03 by jmacedo-          #+#    #+#             */
/*   Updated: 2025/04/08 19:06:34 by jmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST

# include <stdio.h>

#endif

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

#ifdef TEST
/*
int	main(void)
{
	char	lol[] = "lol";
	char	lmao[] = "lmao";

	ft_strcpy(lmao, lol);
	printf("%s | %s \n", lmao, lol);
	return (0);
}
*/
#endif
