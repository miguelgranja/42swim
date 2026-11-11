/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:32:42 by jmacedo-          #+#    #+#             */
/*   Updated: 2025/04/10 16:10:09 by jmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#ifdef TEST
/*
int	main(void)
{
	char	dest[20];
	char	src[] = "jupiter";

	ft_strncpy(dest, src, 5);
	printf("%s | %s \n", src, dest);
	return (0);
}
*/
#endif
