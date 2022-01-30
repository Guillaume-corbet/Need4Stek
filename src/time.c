/*
** EPITECH PROJECT, 2019
** AIA_n4s_2018
** File description:
** time
*/

#include "../include/nfs.h"

float get_time(void)
{
    char *str;
    int i = 0;
    float nb = 0;

    my_putstr(GETTIME);
    str = get_next_line(0);
    while (str[0] != '[' && str[0] != '\0')
        str++;
    str++;
    nb = atof(str);
    while (str[i] != ',' && str[i] != '\0')
        str++;
    str++;
    for (int count = 0; count < 3 && str[i] != '\0'; count++)
        i = i + 1;
    str[i] = '\0';
    return (nb + atof(my_strcat("0.", str)));
}

void wait(float time_ms)
{
    char *str = malloc(sizeof(char) * 15);
    
    gcvt(time_ms, 3, str);
    my_putstr(ADVANCE);
    my_putstr(str);
    free(str);
}