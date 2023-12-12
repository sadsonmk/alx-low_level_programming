#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index of value or -1 if array NULL or value absent
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, low = 0;
	size_t high = size - 1;
	char sep;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			sep = (i < high) ? ',' : ' ';
			printf("%d%c ", array[i], sep);
		}
		printf("\n");

		mid = (low + high) / 2;

		if (value < array[mid])
		{
			high = mid - 1;
		}
		else if (value > array[mid])
		{
			low = mid + 1;
		}
		else if (value == array[mid])
		{
			return (mid);
		}

	}
	return (-1);
}
