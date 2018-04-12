/*
** EPITECH PROJECT, 2017
** prepare_BSQ.c
** File description:
** prepare to function BSQ
*/

#include "../include/my.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int prepare_BSQ(char *path, int fd)
{
	char *buf;
	char **array;
	int size = 0;
	int lenght;
	int nbr = 0;

	buf = malloc(sizeof(char));
	size = get_size(path);
	read(fd, buf, size);
	nbr = my_get_nbr(buf);
	array = malloc(sizeof(char) * nbr * nbr);
	lenght = set_array(array, path, fd, nbr);
	BSQ(array, nbr, lenght);
	close(fd);
	free(buf);
	free(array);
	return (0);
}
