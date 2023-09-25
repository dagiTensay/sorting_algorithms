#include "sort.h"
#include <stddef.h>
#include <stdbool.h>

/**
 * bubble_sort - sorts the given array
 * @array: array to be sorted
 * @size: size of the @array
 * Return: noting
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	bool swapped;

	for (i = 0; i < size; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}
