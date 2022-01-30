/*
** EPITECH PROJECT, 2019
** AIA_n4s_2018
** File description:
** backward
*/

#include "../include/nfs.h"

void set_speed_back(float nb)
{
    char *str = malloc(sizeof(char) * 15);
    
    gcvt(nb, 3, str);
    str = my_strcatf(str, "\n");
    str = new_getline(my_strcat(BACK, str), 10);
    free(str);
}

void speed_down(float min)
{
    set_speed(get_speed() - min);
}

void back(void)
{
    my_putstr(BACK);
    my_putstr("1\n");
}

void stop(void)
{
    my_putstr(ADVANCE);
    my_putstr("0\n");
}