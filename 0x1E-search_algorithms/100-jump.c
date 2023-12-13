#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index of the value or -1 if array NULL or value not in array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, higher, low = 0, high = sqrt(size);

	if (!array)
		return (-1);

	while (array[high] < value && low < high)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		low = high;
		high = high + sqrt(size);
		higher = high;

		if (high > size - 1)
			high = size;
	}

	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	printf("Value found between indexes [%ld] and [%ld]\n", low, higher);
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}
