/*
** EPITECH PROJECT, 2019
** AIA_n4s_2018
** File description:
** forward
*/

#include "../include/nfs.h"

void set_speed(float nb)
{
    char *str = malloc(sizeof(char) * 15);
    
    gcvt(nb, 3, str);
    str = my_strcatf(str, "\n");
    str = new_getline(my_strcat(ADVANCE, str), 10);
    free(str);
}

void speed_up(float add)
{
    set_speed(get_speed() + add);
}

void gas_gas_gas(void)
{
    my_putstr(ADVANCE);
    my_putstr("1\n");
}