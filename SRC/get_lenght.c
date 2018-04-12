/*
** EPITECH PROJECT, 2017
** get_lenght.c
** File description:
** get the lenght max of the map
*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int get_lenght(char *file)
{
	int fd = open(file, O_RDONLY);
	char *buf = malloc(sizeof(char));
	int i = 0;

	for (int j = 0; j != 3; j++) {
		i = 0;
		while (buf[0] != '\n' && buf[0] != 0) {
			free(buf);
			buf = malloc(sizeof(char));
			read(fd, buf, 1);
			i++;
		}
		read(fd, buf, 1);
	}
	free(buf);
	close(fd);
	return (i);
}
