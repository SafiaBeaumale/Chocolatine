/*
** EPITECH PROJECT, 2022
** sokoban sauv
** File description:
** my_up.c
*/

#include "include/sokoban.h"
#include "include/my.h"

int *my_up_condition(int *p_position, int x, int y)
{
    if (mvinch(p_position[y] - 1, p_position[x]) == 'X' &&
        mvinch(p_position[y] - 2, p_position[x]) != '#') {
        mvprintw(p_position[y] - 2, p_position[x], "X");
    }
    return (p_position);
}

int *my_up(int *p_position)
{
    int y = 0;
    int x = 1;

    if (mvinch(p_position[y] - 1, p_position[x]) +
    mvinch(p_position[y] - 2, p_position[x]) < 123 ||
    mvinch(p_position[y] - 1, p_position[x]) +
    mvinch(p_position[y] - 2, p_position[x]) == 167) {
        my_up_condition(p_position, x, y);
        mvprintw(p_position[y], p_position[x], " ");
        p_position[y]--;
    }
    return (p_position);
}
