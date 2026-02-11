#include "main.h"

/**
 * linear - search for the target with linear search method.
 *
 * @target: the num. that we search for.
 * @n: number of array elements.
 * @arr: the array we search in.
 *
 * Return: the index of the target if it is one of array elements, -1
 * if it's not.
 */

int linear(int target, int n,  int arr[])
{
	int j;

	for (j = 0; j <= n; j++)
	{
		if (target == arr[j])
			return (j);
	}

	return (-1);
}
