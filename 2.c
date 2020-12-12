#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	double arr[] = {0.1, 0.2, 0.3, 0.4, 0.5};
	int n = sizeof arr / sizeof(double);
	int i;
	printf("length = %d\n", n);
	for (i = 0; i < n; i++)
	{
		printf("arr[%d] = %f\n", i, arr[i]);
	}
}

