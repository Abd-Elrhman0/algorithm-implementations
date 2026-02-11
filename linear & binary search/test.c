#include "main.h"

/**
 * main - test the code.
 *
 * Return: 0.
 */

int main(void)
{
	int target, end, beginning, choice, n, j, i;
	int arr[100];

	printf("do you want to search in rondom array or ordered array? ");
	printf("(write '1' for rondom and '2' for ordered)\n");
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("what is array size?\n");
		scanf("%d", &n);

		printf("what is your array?\n");
		for (j = 0; j < n; j++)
			scanf("%d", &arr[j]);

		printf("what is your target?\n");
		scanf("%d", &target);

		printf("your target in index %d.\n", linear(target, n, arr));
	}
	else if (choice == 2)
	{

		printf("beginning?\n");
		scanf("%d", &beginning);

		printf("end?\n");
		scanf("%d", &end);
		
		if (end <= beginning)
		{
			printf("end must be > beginning\n");
			exit(0);
		}

		for (i = beginning; i <= end; i++)
                	arr[i] = i;

		

		printf("target?\n");
		scanf("%d", &target);

		if (target < beginning || target > end)
			printf("the target must be > beginning and < end\n");
		else
			printf("your target in index %d.\n", binary1(beginning, beginning, end, arr, target));

	}
	else
		printf("please choose 1 or 2 answer\n");

}
