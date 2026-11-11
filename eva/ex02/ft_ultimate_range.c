/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfurlan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:49:58 by rfurlan-          #+#    #+#             */
/*   Updated: 2025/04/09 15:46:56 by rfurlan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*buffer;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	buffer = (int *)malloc(sizeof(int) * size);
	if (buffer == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		buffer[i] = min + i;
		i++;
	}
	*range = buffer;
	return (size);
}
/*
void ft_putnbr(int n)
{
    char digit;

    // Tratamento para número negativo
    if (n < 0)
    {
        write(1, "-", 1);
        // Caso especial para o menor valor de int
        if (n == -2147483648)
        {
            write(1, "2147483648", 10);
            return;
        }
        n = -n;
    }

    // Caso base: número de 0 a 9
    if (n < 10)
    {
        digit = n + '0';
        write(1, &digit, 1);
    }
    // Caso recursivo: número maior que 9
    else
    {
        ft_putnbr(n / 10);
        digit = (n % 10) + '0';
        write(1, &digit, 1);
    }
}

// Função auxiliar para imprimir uma string
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

// Função principal para testar o ft_ultimate_range
int main(void)
{
    int *arr;
    int size;

    // Teste 1: Um intervalo válido (1 a 10)
    ft_putstr("Teste 1: ft_ultimate_range(&arr, 1, 10)\n");
    size = ft_ultimate_range(&arr, 1, 10);

    ft_putstr("Tamanho retornado: ");
    ft_putnbr(size);
    ft_putstr("\n");

    if (arr == NULL)
    {
        ft_putstr("Erro: array é NULL\n");
    }
    else
    {
        ft_putstr("Array: [");
        int i = 0;
        while (i < size)
        {
            ft_putnbr(arr[i]);
            if (i < size - 1)
                ft_putstr(", ");
            i++;
        }
        ft_putstr("]\n");
        free(arr); // Importante: liberar a memória alocada
    }

    // Teste 2: Min maior que Max (deve retornar 0 e arr = NULL)
    ft_putstr("\nTeste 2: ft_ultimate_range(&arr, 10, 5)\n");
    size = ft_ultimate_range(&arr, 10, 5);

    ft_putstr("Tamanho retornado: ");
    ft_putnbr(size);
    ft_putstr("\n");

    if (arr == NULL)
        ft_putstr("Correto: array é NULL\n");
    else
    {
        ft_putstr("Erro: array deveria ser NULL\n");
        free(arr);
    }

    // Teste 3: Min igual a Max (deve retornar 0 e arr = NULL)
    ft_putstr("\nTeste 3: ft_ultimate_range(&arr, 7, 7)\n");
    size = ft_ultimate_range(&arr, 7, 7);

    ft_putstr("Tamanho retornado: ");
    ft_putnbr(size);
    ft_putstr("\n");

    if (arr == NULL)
        ft_putstr("Correto: array é NULL\n");
    else
    {
        ft_putstr("Erro: array deveria ser NULL\n");
        free(arr);
    }

    // Teste 4: Números negativos
    ft_putstr("\nTeste 4: ft_ultimate_range(&arr, -5, 5)\n");
    size = ft_ultimate_range(&arr, -5, 5);

    ft_putstr("Tamanho retornado: ");
    ft_putnbr(size);
    ft_putstr("\n");

    if (arr == NULL)
    {
        ft_putstr("Erro: array é NULL\n");
    }
    else
    {
        ft_putstr("Array: [");
        int i = 0;
        while (i < size)
        {
            ft_putnbr(arr[i]);
            if (i < size - 1)
                ft_putstr(", ");
            i++;
        }
        ft_putstr("]\n");
        free(arr);
    }

    return (0);
}*/
