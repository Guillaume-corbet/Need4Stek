/*
** EPITECH PROJECT, 2019
** move func
** File description:
** for nfs
*/

#include "../include/nfs.h"

char *new_getline(char *message, int nb)
{
    size_t bufs = 500;
    char *oth_str = malloc(sizeof(char) * 500);

    my_putstr(message);
    if (getline(&oth_str, &bufs, stdin) == -1) {
        my_printf("%s", END);
        exit(0);
    }
    while (my_strlen(oth_str) < nb) {
        my_putstr(message);
        getline(&oth_str, &bufs, stdin);
    }
    return (oth_str);
}

void get_drifted(void)
{
    set_speed(1);
    wait(20);
    stop();
    set_turn(-1);
}

void loop(void)
{
    float *res = get_lidar();

    if (res[0] < 300) {
        set_turn(-0.3);
    } else if (res[2] < 300) {
        set_turn(0.3);
    } else if (res[0] > res[2]) {
        set_turn(0.2);
    } else if (res[0] < res[2]) {
        set_turn(-0.2);
    } else {
        set_turn(0);
    }
}

int main(void)
{
    my_putstr(START);
    char *str = NULL;
    str = get_next_line(0);
    write(2, str, strlen(str));
    set_speed(0.36);
    while (1) {
        loop();
    }
}