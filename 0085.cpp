#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a, b = 1, c = 1, i, d;
    scanf("%d", &a);
    if (a == 1 || a == 2)
        printf("1\n");
    else
    {
        for (i = 3; i <= a; i++)
        {
            d = b + c;
            b = c;
            c = d;
        }
        printf("%d\n", d);
    }
    return 0;
}