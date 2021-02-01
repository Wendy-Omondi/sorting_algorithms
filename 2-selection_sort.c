#include "sort.h"

/**
 * swap - swap two integers
 * @x: first integer
 * @y: second integer
 **/
void swap(int *x, int *y)
{
int temp;

temp = *x;
*x = *y;
*y = temp;
}

/**
 *selection_sort - function that sorts an array of integers in
 *                 ascending order using the Selection sort algorithm
 *@array: integers to be sorted
 *@size: array size
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
unsigned int i, j, least;

if (array == NULL || size < 2)
return;

for (i = 0; i < size; i++)
{
least = i;
for (j = i + 1; j < size; j++)
{
if (array[least] > array[j])
least = j;
}
if (least != i)
{
swap(&array[i], &array[least]);
print_array(array, size);
}
}

}
