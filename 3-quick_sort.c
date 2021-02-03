#include "sort.h"

/**
 *lomuto_partition - implements quicksort using
 *                   the Lomuto partioning scheme.
 *@array: integers to be sorted.
 *@low: first index of array
 *@high: last index of array
 *@size: size of array
 *Return: pivot position
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot;
int temp;
int i;
int j;

pivot = array[high];
i = low - 1;

for (j = low; j <= high; j++)
{
if (array[j] <= pivot)
{
i++;
if (i != j)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;

print_array(array, size);
}
}
}
return (i);
}

/**
 *sorting - sorts array
 *@array: integers to be sorted
 *@low: first index
 *@high: last index
 *@size: size of array
 *Return: void
 */

void sorting(int *array, int low, int high, size_t size)
{
int pivot;

if (low < high)
{
pivot = lomuto_partition(array, low, high, size);
sorting(array, low, pivot - 1, size);
sorting(array, pivot + 1, high, size);
}
}

/**
 *quick_sort - function that sorts an array of integers in
 *             ascending order using the Quick sort algorithm
 *@array: integers to be sorted
 *@size: size of array
 *Return: void
 */

void quick_sort(int *array, size_t size)
{
int low = 0;
int high = size - 1;

sorting(array, low, high, size);
}
