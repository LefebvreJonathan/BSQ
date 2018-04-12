/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main of BSQ
*/

#include <stdio.h>
#include "../include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	int fd = open(av[1], O_RDONLY);

	if (fd == -1 || ac != 2) {
		my_putstr("Error\n");
		return (84);
	} else
		return (prepare_BSQ(av[1], fd));
}
