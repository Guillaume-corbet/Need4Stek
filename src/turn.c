/*
** EPITECH PROJECT, 2019
** AIA_n4s_2018
** File description:
** turn
*/

#include "../include/nfs.h"

void set_turn(float angle)
{
    char *str = malloc(sizeof(char) * 15);
    
    gcvt(angle, 3, str);
    my_putstr(TURN);
    my_putstr(str);
    free(str);
}

float get_turn(void)
{
    char *str = malloc(sizeof(char) * 500);
    int i = 0;
    int count = 0;
    float nb;

    str = new_getline(GETTURN, 40);
    while (count < 3 && str[i] != '\0') {
        if (str[i] == ':')
            count = count + 1;
        i = i + 1;
    }
    str = str + i;
    nb = atof(str);
    return (nb);
}

void turn_up(float add)
{
    set_turn(get_turn() + add);
}

void turn_down(float less)
{
    set_turn(get_turn() - less);
}