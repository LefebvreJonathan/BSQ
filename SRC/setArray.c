/*
** EPITECH PROJECT, 2017
** setArray.c
** File description:
** take a file and put in an array
*/

#include "../include/my.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int set_array(char **array, char *file, int fd, int height)
{
	int size = get_lenght(file);
	char buf[size];

	read(fd, buf, 1);
	for (int i = 1; i != height + 1; i++) {
		read(fd, buf, size);
		array[i] = malloc(sizeof(char) * size + 2);
		my_strcpy(array[i], buf);
		array[i][size] = 0;
		read(fd, buf, 1);
	}
	return (size);
}
