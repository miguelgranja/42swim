/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:21:33 by alaziz            #+#    #+#             */
/*   Updated: 2025/04/10 16:24:21 by jmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *sep)
{
	while (*sep != '\0')
	{
		if (*sep == c)
			return (1);
		sep++;
	}
	return (0);
}

char	*str_dup(char *str, char *charset)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	while (str[len] != '\0' && !is_sep(str[len], charset))
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	element_count(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str != '\0')
	{
		if (!is_sep(*str, charset))
		{
			cnt++;
			while (!is_sep(*str, charset) && *str != '\0')
				str++;
		}
		else
			str++;
	}
	return (cnt);
}

char	**ft_split(char *str, char *charset)
{
	int		num;
	int		i;
	char	**result;

	num = element_count(str, charset);
	result = (char **)malloc(sizeof(char *) * (num + 1));
	if (result == 0)
		return (0);
	i = 0;
	while (*str != '\0')
	{
		if (!is_sep(*str, charset))
		{
			result[i++] = str_dup(str, charset);
			while (!is_sep(*str, charset) && *str != '\0')
				str++;
		}
		else
			str++;
	}
	result[i] = 0;
	return (result);
}

int main() {
    char str[] = "Hello, world! This is a test.";
    char charset[] = " ,!";  // Separators: space, comma, exclamation mark
    char **split = ft_split(str, charset);
    
    if (split == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print the split result
    int i = 0;
    while (split[i]) {
        printf("Word %d: %s\n", i + 1, split[i]);
        free(split[i]);  // Free each allocated word
        i++;
    }
    
    free(split);  // Free the array of strings
    return 0;
}

