#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int arr[5];
	int i;
	int* pArr;

	int a = 5;
	int* pa = &a;
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] --> %X\n", i, &arr[i]);
	}
	for (i = 0; i < 5; i++)
    {
        *(arr + i) = i;
    }
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d] --> %d, %X\n", i, arr[i], &arr[i]);
    }
	pArr = &arr[2];
	for (i = -2; i < 3; i++)
	{
		printf("pArr + (%d)>> %d, %X\n", i, *(pArr + i), pArr + i);
	}
}

