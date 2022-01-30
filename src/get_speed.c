/*
** EPITECH PROJECT, 2019
** AIA_n4s_2018
** File description:
** get_speed
*/

#include "../include/nfs.h"

float get_speed(void)
{
    char *str;
    int i = 0;
    int count = 0;
    float nb;

    my_putstr(GETSPEED);
    str = get_next_line(0);
    while (count < 3 && str[i]) {
        if (str[i] == ':')
            count++;
        i++;
    }
    str += i;
    nb = atof(str);
    return (nb);
}

float get_speed_max(void)
{
    char *str;
    int i = 0;
    int count = 0;
    float nb;

    my_putstr(GETSPEEDMAX);
    str = get_next_line(0);
    while (count < 3 && str[i]) {
        if (str[i] == ':')
            count++;
        i++;
    }
    str += i;
    nb = atof(str);
    free(str);
    return (nb);
}

float get_speed_min(void)
{
    char *str;
    int i = 0;
    int count = 0;
    float nb;

    my_putstr(GETSPEEDMIN);
    str = get_next_line(0);
    while (count < 3 && str[i]) {
        if (str[i] == ':')
            count++;
        i++;
    }
    str += i;
    nb = atof(str);
    return (nb);
}