#include "sort.h"

/**
 *selection_sort - function that sorts an array of integers in
 *                 ascending order using the Selection sort algorithm
 *@array: integers to be sorted
 *@size: array size
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
int x, y;
int least;
int temp;
int nsz = size;

for (x = 0; x < nsz - 1; x++)
{
least = x;
for (y = x + 1; y < nsz; y++)
{
if (array[y] < array[least])
least = y;
}
if (least != x)
{
temp = array[y];
array[x] = array[least];
array[least] = temp;
print_array(array, size);
}
}
}
