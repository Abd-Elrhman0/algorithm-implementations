#include "main.h"

/**
 * binary - search for the target with binary search method(loops).
 *
 * @beginning: the first number in the array.
 * @end: the end of the array.
 * @arr: pointer to the array of integers to search in.
 * @target: the number we search for.
 *
 * Return: the index of the target if it is one of array elements, -1
 * if it's not.
 */

int binary(int beginning, int end, int arr[], int target)
{
	int i;
	int base;

	base = beginning;

while (beginning <= end)
	{
		if (target == arr[(end + beginning) / 2])
		return (((end + beginning) / 2) - base);

		else if (target > arr[(end + beginning) / 2])
		{
			beginning = ((end + beginning) / 2) + 1;
		}

		else
		{
			end = ((end + beginning) / 2) - 1;
		}
	}

	return (-1);

}
