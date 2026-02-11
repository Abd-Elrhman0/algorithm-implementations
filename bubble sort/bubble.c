#include "main.h"

/**
 * bubble - sort an array of random numbers.
 *
 * @arr: the array that will be sorted.
 *
 * Return: a pointer to the first element of the array after sort.
 */

int *bubble(int arr[], int n)
{
	int j, i, temp, k;
	int f = n;
	for (k = 0; k < f; k++, n--)
	{
		for (i = 0, j = i + 1; j < n; j++, i++)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return (arr);
}
