#include "sort.h"

/**
 *insertion_sort_list - function that sorts a doubly linked list of integers
 *                      in ascending order using the Insertion sort algorithm
 *@list: doubly linked list of integers to be sorted
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current;
listint_t *temp;

current = *list;
current = current->next;

while (current != NULL)
{
while (current->prev != NULL && current->n < current->prev->n)
{
temp = current;

if (current->next != NULL)
current->next->prev = temp->prev;
current->prev->next = temp->next;

current = current->prev;
temp->prev = current->prev;
temp->next = current;
if (current->prev != NULL)
current->prev->next = temp;
current->prev = temp;

if (temp->prev == NULL)
*list = temp;

print_list(*list);
current = current->prev;
}
current = current->next;
}
}
