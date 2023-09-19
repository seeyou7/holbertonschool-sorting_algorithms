#include "sort.h"

/**
 *bubble_sort - function that sorts an array of integers in ascending order
 *using the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	int temp;
	size_t i, j;


	for (i = 0; i < size - 1; i++)
	{

		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
