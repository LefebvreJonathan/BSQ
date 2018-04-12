/*
** EPITECH PROJECT, 2017
** getsize.c
** File description:
** get size of the map
*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int get_size(char *file)
{
	int fd = open(file, O_RDONLY);
	char *buf = malloc(sizeof(char));
	int i = 0;

	while (buf[0] != '\n') {
		free(buf);
		buf = malloc(sizeof(char));
		read(fd, buf, 1);
		i++;
	}
	close(fd);
	return (i - 1);
}
