#include "sort.h"

/**
 * swap_ints - Swap two integers in an arr.
 * @a: first integer to swap.
 * @z: second integer to swap.
 */
void swap_ints(int *a, int *z)
{
	int tmp;

	tmp = *a;
	*a = *z;
	*z = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, ln = size;
	bool swaped = false;

	if (array == NULL || size < 2)
		return;

	while (swaped  == false)
	{
		swaped  = true;
		for (i = 0; i < ln - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				swaped  = false;
			}
		}
		ln--;
	}
}
