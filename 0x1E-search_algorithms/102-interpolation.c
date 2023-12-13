#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: s a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: first index where value is or -1 if array NULL or value absent
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array || size == 0)
		return (-1);

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] -
						array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%d] is out of range\n", value);
	return (-1);
}
