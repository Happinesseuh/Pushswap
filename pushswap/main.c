/*
** EPITECH PROJECT, 2020
** elo
** File description:
** swap
*/

#include "./include/pushswap.h"

void pa_pb(list_t **first, list_t **second)
{
    if ((*second) == NULL)
        return;
    list_push(first, (*second)->data);
    list_remove(second, 0);
}

void sa(list_t *head)
{
    int tmp = head->next->data;
    head->next->data = head->data;
    head->data = tmp;
}

int is_sort(list_t *head)
{
    list_t *nav = head;

    while (nav->next != NULL) {
        if (nav->data > nav->next->data)
            return (0);
        nav = nav->next;
    }
    return (1);
}

void sort(list_t **list_a, list_t **list_b)
{
    for (; !(is_sort((*list_a)) == 1 && (*list_b) == NULL);) {
        if ((*list_a)->data > (*list_a)->next->data) {
            sa(*list_a);
            my_putstr("sa");
        }
        else if ((*list_a)->next->next != NULL && is_sort((*list_a)) != 1) {
            pa_pb(list_b, list_a);
            my_putstr("pb");
        }
        else {
            pa_pb(list_a, list_b);
            my_putstr("pa");
        }
        if (!(is_sort((*list_a)) == 1 && (*list_b) == NULL))
            my_putstr(" ");
    }
    my_putstr("\n");
}

int main(int ac, char **av)
{
    list_t *list_a = NULL;
    list_t *list_b = NULL;

    if (ac < 2)
        return 84;
    if (ac == 2) {
        my_putstr("\n");
        return 0;
    }
    for (int i = 1; i < ac; i++) {
        list_stack(&list_a, my_getnbr(av[i]));
    }
    sort(&list_a, &list_b);
    list_destroy(list_a);
    list_destroy(list_b);
    return 0;
}