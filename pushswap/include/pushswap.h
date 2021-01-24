/*
** EPITECH PROJECT, 2020
** pushswap.h
** File description:
** pushswap prototypes
*/

#ifndef _PUSHSWAP_H
#define _PUSHSWAP_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct list {
    int data;
    struct list *next;
} list_t;

/* LIB */
int my_getnbr(char const *str);
void my_putstr(char const *str);
int my_put_nbr (int nb);
/* LIST FUNCTIONS */
void list_push(list_t **head, int data);
void list_stack(list_t **head, int data);
void list_destroy(list_t *head);
void list_show(list_t *head);
void list_remove(list_t **head, int index);
void list_display(list_t *list);
/* OPERATIONS */
void pa_pb(list_t **first, list_t **second);
void sa(list_t *head);
/* SORT */
int is_sort(list_t *head);
void sort(list_t **list_a, list_t **list_b);

#endif /* !PUSHSWAP */
