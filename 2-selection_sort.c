#include "sort.h"

/**
 * selection_sort - performs selection sort on the
 * given array.
 * @array: array to be sorted
 * @size: size of the @array
 * Returns: noting.
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, jmin;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		jmin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jmin])
				jmin = j;

		}
		if (jmin != i)
		{
			temp = array[i];
			array[i] = array[jmin];
			array[jmin] = temp;
			print_array(array, size);
		}
	}
}
