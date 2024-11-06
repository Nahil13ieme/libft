/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:25:30 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/06 15:53:30 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	test_atoi()
{
	printf("Test avec nombre positif sans signe : %d\n", ft_atoi("42"));             // 42
    printf("Test avec nombre négatif : %d\n", ft_atoi("-42"));                      // -42
    printf("Test avec signe positif explicite : %d\n", ft_atoi("+42"));             // 42
    printf("Test avec espaces avant le nombre : %d\n", ft_atoi("    42"));          // 42
    printf("Test avec espaces et signe : %d\n", ft_atoi("    -42"));                // -42
    printf("Test avec nombre maximum : %d\n", ft_atoi("2147483647"));               // 2147483647 (INT_MAX)
    printf("Test avec nombre minimum : %d\n", ft_atoi("-2147483648"));              // -2147483648 (INT_MIN)
    printf("Test avec caractère non numérique au début : %d\n", ft_atoi("a42"));    // 0 (invalid start)
    printf("Test avec caractère non numérique au milieu : %d\n", ft_atoi("42a56")); // 42 (stops at 'a')
    printf("Test avec chaînes vides : %d\n", ft_atoi(""));                          // 0 (empty string)
    printf("Test avec espaces seulement : %d\n", ft_atoi("    "));                  // 0 (whitespace only)
    printf("Test avec plusieurs signes : %d\n", ft_atoi("--42"));                   // 0 (invalid multiple signs)
    printf("Test avec juste un signe moins : %d\n", ft_atoi("-"));                  // 0 (no digits)
    printf("Test avec juste un signe plus : %d\n", ft_atoi("+"));                   // 0 (no digits)
}

void print_memory(const char *label, const void *mem, size_t n) {
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", ((unsigned char *)mem)[i]);
    }
    printf("\n");
}

void	test_bzero()
{
	char    test1[10] = "123456789";
    char    test2[10] = "abcdefghi";
    char    test3[10] = "hello";

    print_memory("Avant ft_bzero (test1)", test1, sizeof(test1));
    ft_bzero(test1, 5);  // Zéro les 5 premiers octets
    print_memory("Après ft_bzero (test1)", test1, sizeof(test1));

    print_memory("Avant ft_bzero (test2)", test2, sizeof(test2));
    ft_bzero(test2, 0);  // Test avec n = 0, aucun changement attendu
    print_memory("Après ft_bzero (test2)", test2, sizeof(test2));

    print_memory("Avant ft_bzero (test3)", test3, sizeof(test3));
    ft_bzero(test3, sizeof(test3));  // Zéro tout le tableau
    print_memory("Après ft_bzero (test3)", test3, sizeof(test3));
}

void	test_calloc()
{
	int *arr;
    size_t n_elements = 5;

    arr = (int *)ft_calloc(n_elements, sizeof(int));
    if (arr == NULL) {
        printf("ft_calloc failed\n");
        return 1;
    }

    // Vérification de l'allocation
    print_memory("Mémoire allouée (arr)", arr, n_elements * sizeof(int));

    // Vérification que tous les éléments sont initialisés à zéro
    for (size_t i = 0; i < n_elements; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    free(arr);
}

int	main(void)
{
	// Test ft_atoi
	test_atoi();
	// Test ft_bzero
	test_bzero();
	// Test ft_calloc
	test_calloc();
	// Test ft_isalnum
	// Test ft_isalpha
	// Test ft_isascii
	// Test ft_isdigit
	// Test ft_isprint
	// Test ft_itoa
	// Test ft_memchr
	// Test ft_memcpy
	// Test ft_memmove
	// Test ft_memset
	// Test ft_putchar_fd
	// Test ft_putendl_fd
	// Test ft_putnbr_fd
	// Test ft_split
	// Test ft_strchr
	// Test ft_strdup
	// Test ft_striteri
	// Test ft_strjoin
	// Test ft_strlcat
	// Test ft_strlcpy
	// Test ft_strlen
	// Test ft_strmapi
	// Test ft_strncmp
	// Test ft_strnstr
	// Test ft_strrchr
	// Test ft_strtrim
	// Test ft_substr
	// Test ft_tolower
	// Test ft_toupper

	return (0);
}
