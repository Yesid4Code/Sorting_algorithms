#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int aux = 0;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
