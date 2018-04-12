/*
** EPITECH PROJECT, 2017
** replaceSquare.c
** File description:
** replace in the array the biggest array with O and displays it
*/

#include "../include/my.h"
#include <stdlib.h>
#include <unistd.h>

void replace_square(char **array, int x, int y, int size)
{
	for (int i = x; i < x + size; i++)
		for (int j = y - 1; j < y + size - 1; j++)
			array[i][j] = 'x';
	for (int i = 1; array[i] != NULL; i++) {
		my_putstr(array[i]);
		write(1, "\n", 1);
	}
}
