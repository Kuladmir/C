#include <stdio.h>
//�ж�һ�����Ƿ�Ϊ�������������������������
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
    printf("������һ������:    ");  scanf("%d", &n);
    flag = fun(n, a, &k);
    if (flag)
    {
        printf(" %d ����������������:  ", n);
        for (i = 0; i < k; i++)   printf("  %d ", a[i]);
        printf("\n");
    }
    else    printf(" %d ��������.\n ", n);
}
