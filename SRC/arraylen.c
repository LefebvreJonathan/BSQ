/*
** EPITECH PROJECT, 2017
** my_arraylen.c
** File description:
** calcul the number of array in double array
*/

#include <stdio.h>

int my_arraylen(char **av)
{
	int i = 0;

	while (av[i + 1] != NULL)
		i++;
	return (i + 1);
}
