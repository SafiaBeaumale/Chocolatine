/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday07-safia.beaumale-mesmar
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}
