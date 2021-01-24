/*
** EPITECH PROJECT, 2020
** tim
** File description:
** list
*/

#include "../include/pushswap.h"

void list_push(list_t **head, int data)
{
    list_t *node = malloc(sizeof(list_t));

    if (node == NULL)
        return;
    node->data = data;
    node->next = (*head);
    (*head) = node;
}

void list_stack(list_t **head, int data)
{
    list_t *node = malloc(sizeof(list_t));
    list_t *temp = (*head);

    if (node == NULL)
        return;
    node->data = data;
    node->next = NULL;
    if ((*head) == NULL)
        (*head) = node;
    else {
        for (; temp->next != NULL; temp = temp->next);
        temp->next = node;
    }
}

void list_destroy(list_t *head)
{
    list_t *temp;

    if (head == NULL)
        return;
    for (;head != NULL;) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void list_remove(list_t **head, int index)
{
    list_t *temp = (*head);
    list_t *next = NULL;

    if ((*head) == NULL)
        return;
    if (index == 0) {
        (*head) = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; (temp != NULL) && (i < index - 1); i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL)
        return;
    next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

void list_display(list_t *list)
{
    if (list == NULL)
        return;

    for (; list->next != NULL; list = list->next) {
        my_put_nbr(list->data);
        my_putstr("\n");
    }
    my_put_nbr(list->data);
}