#include "sort.h"

/**
 *bubble_sort - Sorts an array of int.
 *
 * @array: The array to be sorted.
 *@size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		/* Flag to optimize the sorting process by checkin*/
		int swapped = 0;
		/* The last 'i' elements are already*/
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/* A swap was made, so set the swapped flag to true */
				swapped = 1;
			}
		}
		/* If no swaps were made in this pass, the array is already sorted */
		if (swapped == 0)
			break;
	}
}
