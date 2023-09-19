#include "sort.h"

/**
 *bubble_sort - function that sorts an array of integers in ascending order
 *using the Bubble sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in array
 * Return: void
 */
*/



void bubble_sort(int *array, size_t size) {
  if (!array)
    return;

  int temp_swap;
  int swapped = 1; 

  for (int j = 1; swapped; j++) {
    swapped = 0; 

    for (size_t i = 0; i < size - j; i++) {
      if (array[i] > array[i + 1]) {
	
	temp_swap = array[i];
	array[i] = array[i + 1];
	array[i + 1] = temp_swap;
	swapped = 1; 
	print_array(array, size);
      }
    }
  }
}
