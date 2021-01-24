/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "unistd.h"

static void my_putchar(char c)
{
    write(1, &c,  1);
}

void my_putstr(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        my_putchar(str[i]);
}