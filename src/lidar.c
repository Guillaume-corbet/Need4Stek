/*
** EPITECH PROJECT, 2019
** AIA_n4s_2018
** File description:
** lidar
*/

#include "../include/nfs.h"

float *init_lidar(void)
{
    float *res = malloc(sizeof(float) * 3);

    res[0] = -1;
    res[1] = -1;
    res[2] = -1;
    return (res);
}

float *get_lidar(void)
{
    char *str = malloc(sizeof(char) * 500);
    int i = 0;
    int count = 0;
    float *res = init_lidar();

    str = new_getline(LIDAR, 100);
    while (str[i]) {
        if (str[i] == ':')
            count++;
        i++;
        if (count == 3 && res[0] == -1)
            res[0] = atof(str + i);
        if (count == 18 && res[1] == -1)
            res[1] = atof(str + i);
        if (count == 34 && res[2] == -1)
            res[2] = atof(str + i);
    }
    return (res);
}