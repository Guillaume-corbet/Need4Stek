/*
** EPITECH PROJECT, 2018
** getnextline
** File description:
** src
*/

#include "../include/nfs.h"

char *line(char *str, int *i, int fd)
{
    char *res = malloc(sizeof(char) * strlen(str) + 1 - (*i));
    int j = 0;

    while (str[*i] && str[*i] != '\n') {
        res[j] = str[*i];
        (*i)++;
        j++;
    }
    (*i)++;
    res[j] = 0;
    return (res);
}

void reading(int fd, char **str)
{
    int test;
    char *buff = malloc(sizeof(char) * 5 + 1);

    if (buff == NULL)
        return;
    while ((test = read(fd, buff, 5)) == 5) {
        buff[5] = 0;
        *str = my_strcatff(*str, buff);
        buff = malloc(sizeof(char) * 5 + 1);
    }
    if (test <= 0) {
        free(buff);
        return;
    }
    buff[test] = 0;
    *str = my_strcatff(*str, buff);
}

char *get_next_line(int fd)
{
    static char *str = "";
    static unsigned int i = 0;

    if (fd == -1 || (strlen(str) != 0 && i >= strlen(str))) {
        free(str);
        return (NULL);
    }
    if (i == 0)
        reading(fd, &str);
    return (line(str, &i, fd));
}
