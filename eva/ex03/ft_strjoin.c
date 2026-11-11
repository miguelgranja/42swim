/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoval <dkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:23:37 by dkoval            #+#    #+#             */
/*   Updated: 2025/04/07 12:41:08 by dkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	join_strings(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;
	int		i;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result == NULL)
			return (NULL);
		*result = '\0';
		return (result);
	}
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	result = (char *)malloc(total_len + 1);
	if (result == NULL)
		return (NULL);
	join_strings(result, strs, sep, size);
	return (result);
}

#ifdef TEST

int	main(void)
{
	char	*strings[3];
	char	*separator;
	char	*result;

	strings[0] = "Hello";
	strings[1] = "World";
	strings[2] = "42";
	separator = "! ";
	result = ft_strjoin(3, strings, separator);
	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		printf("Error creating string.\n");
	return (0);
}
#endif
