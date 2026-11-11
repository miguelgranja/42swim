/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athaeter <athaeter@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:57:21 by athaeter          #+#    #+#             */
/*   Updated: 2025/04/09 14:57:37 by athaeter         ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lenght;

	lenght = 0;
	while (src[lenght])
		lenght++;
	dest = (char *) malloc(sizeof(char) * (lenght + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*src;

	src = "string";
	printf("Source: %s\n", ft_strdup(src));
	printf("Dest: %s\n", strdup(src));
}*/
