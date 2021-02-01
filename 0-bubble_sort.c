#include "sort.h"

/**
 *bubble_sort - a function that sorts an array of integers in ascending order
 *                using the Bubble sort algorithm
 *@array: integers to be sorted
 *@size: size of array
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
unsigned int x, y, z;

for (x = 0; x < size; x++)
{
for (y = 0; y < size - x - 1; y++)
{
if (array[y] > array[y + 1])
{
z = array[y];
array[y] = array[y + 1];
array[y + 1] = z;
print_array (array, size);
}
}
}
}
