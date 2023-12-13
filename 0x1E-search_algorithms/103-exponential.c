#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where the value is or -1 if array is NULL or value is absent
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high, mid;
	char *sep;

	if (!array || size == 0)
		return (-1);
	i = 1;
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = i - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			sep = (i < high) ? ", " : "\n";
			printf("%d%s", array[i], sep);
		}

		mid = (low + high) / 2;

		if (value < array[mid])
			high = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
		else if (value == array[mid])
			return (mid);
	}
	return (-1);
}
