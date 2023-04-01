/*
** EPITECH PROJECT, 2022
** sokoban sauv
** File description:
** my_victory.c
*/

#include "include/sokoban.h"
#include "include/my.h"

int *my_check_victory(int *p_position)
{
    int x = 1;
    int y = 0;
    int vic = 0;

    if (mvinch(p_position[x], p_position[y]) == 'O'
    && mvinch(p_position[x], p_position[y] == 'X'))
        vic = 1;
    if (mvinch(p_position[x], p_position[y]) == 'P'
    && mvinch(p_position[x], p_position[y]) == 'P'
    || mvinch(p_position[x], p_position[y]) == 0)
        return (0);
    else if (mvinch(p_position[x], p_position[y]) == '\n')
        x++;
        y = 0;
    return (1);
}
