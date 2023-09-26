#include <stdio.h>
#include "sort.h"

/**
 *bubble_sort - Sorts an array of integers in ascending order using the Bubble
 * @array: array to be sorted
 * @size:size of the array
 *
 * Return: return void.
 */
void bubble_sort(int *array, size_t size)
{
	int swapped, temp;
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
			}
			
			print_array(array, size);
		}

		if (swapped == 0)
		{
			break;
		}
	}

}
