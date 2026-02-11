#include "main.h"

/**
 * binary - search for the target with binary search method(recursion).
 *
 * @beginning: the first number in the array.
 * @base: the original starting index of the full array (used for index adjustment).
 * @end: the end of the array.
 * @arr: pointer to the array of integers to search in.
 * @target: the number we search for.
 *
 * Return: the index of the target if it is one of array elements, -1
 * if it's not.
 */

int binary1(int beginning, int base, int end, int arr[], int target)
{
	int n;
	
	if (beginning > end)
		return (-1);
	n = (end + beginning) / 2;

	if (target == n)
		return (n);

	else if (target < n)
		return ((binary1(beginning, base, n - 1, arr, target)) - base);

	else if (target > n)
		return ((binary1(n + 1, base, end, arr, target)) - base);

}
