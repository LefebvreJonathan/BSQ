/*
** EPITECH PROJECT, 2017
** BSQ.c
** File description:
** function who travel the array and found a potencial square
*/

#include "../include/my.h"

void BSQ(char **array, int height, int lenght)
{
	int x = 0;
	int y = 0;
	int size_max = 0;
	int size = 0;

	for (int h = 1; h <= height; h++)
		for (int l = 0; l <= lenght; l++) {
			while (array[h][l] == '.' &&
				check_square(array, h, l, 1 + size) == 0) {
				if (size_max < size + 1) {
					x = h;
					y = 1 + l;
					size_max = 1 + size;
				}
				size++;
			}
			size = 0;
		}
	replace_square(array, x, y, size_max);
}
