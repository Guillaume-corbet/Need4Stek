/*
** EPITECH PROJECT, 2019
** comp
** File description:
** for n4s
*/

#ifndef NEEDFORSTEK_H_
#define NEEDFORSTEK_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "../src/printf/printf.h"

#define START "START_SIMULATION\n"
#define END "STOP_SIMULATION\n"
#define ADVANCE "CAR_FORWARD:"
#define BACK "CAR_BACKWARDS:"
#define TURN "WHEELS_DIR:"
#define LIDAR "GET_INFO_LIDAR\n"
#define GETSPEED "GET_CURRENT_SPEED\n"
#define GETTURN "GET_CURRENT_WHEELS\n"
#define WAIT "CYCLE_WAIT:"
#define GETSPEEDMAX "GET_CAR_SPEED_MAX\n"
#define GETSPEEDMIN "GET_CAR_SPEED_MIN\n"
#define GETTIME "GET_INFO_SIMTIME\n"

char *my_strcat(char *, char *);
char *my_strcatf(char *, char *);
char *my_strcatff(char *, char *);
char *get_next_line(int fd);
void my_putstr(char *s);

#ifndef INC_
#define INC_

/* move_func.c */

char *new_getline(char *message, int nb);
void get_drifted(void);
void loop(void);
int main(void);

/* start_end.c */

void start(void);
void end(void);

/* main.c */


/* time.c */

float get_time(void);
void wait(float time_ms);

/* lidar.c */

float *init_lidar(void);
float *get_lidar(void);

/* turn.c */

void set_turn(float angle);
float get_turn(void);
void turn_up(float add);
void turn_down(float less);

/* printf */


/* forward.c */

void set_speed(float nb);
void speed_up(float add);
void gas_gas_gas(void);

/* get_speed.c */

float get_speed(void);
float get_speed_max(void);
float get_speed_min(void);

/* get_next_line.c */

char *line(char *str, int *i, int fd);
void reading(int fd, char **str);
char *get_next_line(int fd);

/* backward.c */

void set_speed_back(float nb);
void speed_down(float min);
void back(void);
void stop(void);


#endif /* !INC_ */

#endif /* !NEEDFORSTEK_H_ */