#include <stdio.h>
//判断一个数是否为完数，并且输出其除本身的因数
int  fun(int  n, int  a[], int* k)
{
    int  m = 0, i, t;
    t = n;
    /**********found**********/
    for (i = 1; i < n; i++)
        if (n % i == 0)
        {
            a[m] = i;  m++;  t = t - i;
        }
    /**********found**********/
    *k = m;
    /**********found**********/
    if (t == 0)  return  1;
    else  return  0;
}
main()
{
    int  n, a[10], flag, i, k;
    printf("请输入一个整数:    ");  scanf("%d", &n);
    flag = fun(n, a, &k);
    if (flag)
    {
        printf(" %d 是完数，其因子是:  ", n);
        for (i = 0; i < k; i++)   printf("  %d ", a[i]);
        printf("\n");
    }
    else    printf(" %d 不是完数.\n ", n);
}
