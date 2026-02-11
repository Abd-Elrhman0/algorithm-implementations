#include "main.h"

/**
 * selection - sort an array of random numbers.
 *
 * @arr: the array that will be sorted.
 *
 * Return: a pointer to the first element of the array after sort.
 */

int *selection(int arr[], int n)
{
	int min, temp, index, j, i;

	for (j = 0; j < n; j++)
	{
		index = j;
		min = arr[j];
		for (i = j + 1; i < n; i++)
		{
			if (arr[i] < arr[j])
			{
				min = arr[i];
				index = i;
			}
		}

		temp = arr[j];
		arr[j] = min;
		arr[index] = temp;
	}
	return (arr);
}

