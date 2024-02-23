#include "sort.h"
/**
* bubble_sort - Sorts an array of integers using the Bubble sort algorithm
* @array: The array to be sorted
* @size: The number of elements in @array
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	int swapped;

	if (array == NULL)
	{
		return;
	}
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
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}