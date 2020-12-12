#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int n;
	int x[3], y[3];
	int i;
	n = -1;
    for (i = 0; i < 3; i++)
    {
        printf("x[%d]>> ", i);
        scanf_s("%d", &x[i]);
        printf("y[%d]>> ", i);
        scanf_s("%d", &y[i]);
    }
}

