/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athaeter <athaeter@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:59:49 by athaeter          #+#    #+#             */
/*   Updated: 2025/04/09 14:59:52 by athaeter         ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*concat(char *str1, char *str2)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str1[len] != '\0')
		len++;
	while (str2[i] != '\0')
		str1[len++] = str2[i++];
	str1[len] = '\0';
	return (str1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = 0;
	while (i < size)
		len += str_len(strs[i++]);
	if (size > 0)
		len += (size - 1) * str_len(sep);
	result = (char *)malloc(sizeof(char) * (len + 1));
	result[0] = '\0';
	if (result == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		result = concat(result, strs[i]);
		if (i < size - 1)
			result = concat(result, sep);
		i++;
	}
	result[len] = '\0';
	return (result);
}
/*
int main(void) {
  char *src1 = "hello";
  char *src2 = "all";
  char *src3 = "in fourty two";
  char *src4 = "dite hello";
  char *srcs[] = {src1, src2, src3, src4};
  char *sep = "-:-:-";
  char *dest1;
  char *dest2;

  dest1 = ft_strjoin(4, srcs, sep);
  dest2 = ft_strjoin(0, srcs, sep);
  printf("dest1:");
  for (int i = 0; dest1[i] != '\0'; i++) {
    printf("%c", dest1[i]);
  }
  printf("\ndest2:%s\n", dest2);

  free(dest1);
  free(dest2);

  return 0;
}
*/
