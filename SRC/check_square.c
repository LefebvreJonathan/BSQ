/*
** EPITECH PROJECT, 2017
** check_square.c
** File description:
** search the square the biggest one
*/

#include "../include/my.h"

int check_square(char **array, int height, int lenght, int size)
{
	if (size == 1)
		return (0);
	if (my_strlen(array[1]) < lenght + size ||
		my_arraylen(array) < height + size)
		return (1);
	for (int h = height; h != height + size; h++)
		for (int l = lenght; l != lenght + size; l++)
			if (array[h][l] == 'o')
				return (1);
	return (0);
}
