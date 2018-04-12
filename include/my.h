/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** contains the prototypes of all the functions exposed by your libmy.a
*/
#ifndef MY_Y_
#define MY_Y_

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_get_nbr(char const *str);
int my_arraylen(char **av);
void BSQ(char **array, int height, int lenght);
int check_square(char **array, int height, int lenght, int size);
int get_lenght(char *file);
int get_size(char *file);
int prepare_BSQ(char *path, int fd);
void replace_square(char **array, int x, int y, int size);
int set_array(char **array, char *file, int fd, int height);
int valid_map(char *str);

#endif
