/*
** EPITECH PROJECT, 2017
** valid_map.c
** File description:
** check if the map is valid
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int valid_map(char *path)
{
	int fd = open(path, O_RDONLY);
	char *buf = malloc(sizeof(char));
	int nbr = 0;
	int size = 0;

	size = get_size(path);
	read(fd, buf, size);
	nbr = my_get_nbr(buf);
	while (buf[0] != '\0') {
		if (buf[0] != '.' && buf[0] != 'o' && buf[0] != '\n')
			return (84);
		if (buf[0] == '\n')
			size++;
		read(fd, buf, 1);
		printf("%s\n", buf);
	}
	if (size != nbr)
		return (84);
	return (0);
}
