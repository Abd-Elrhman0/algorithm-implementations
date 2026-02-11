#include "main.h"

/**
 * main - test the code.
 *
 * Return: 0.
 */

int main(void)
{
	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int *arr1 = bubble(arr, 9);
	int i;

	for (i = 0; i < 9; i++)
		printf("%d ", arr1[i]);
	printf("\n");
}
