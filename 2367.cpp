#include<stdio.h>
int main()
{
    int m[16], n, i, t, count=0;
    long unsigned a, k;
    printf("No.    number     it's square(palindrome)\n");
    for( n=1; n<256; n++ )  /*���n��ȡֵ��Χ*/
    {
        k=0; t=1; a=n*n;  /*����n��ƽ��*/
        for( i=0; a!=0; i++ )  /*�ӵ͵��߷ֽ���a��ÿһλ��������m[1]~m[16]*/
        {
            m[i] = a % 10;
            a /= 10;
        }
        for(; i>0; i--)
        {
            k += m[i-1] * t;  /*t��¼ĳһλ�ö�Ӧ��Ȩֵ */
            t *= 10;
        }
        if(k == n*n)
            printf("%2d%10d%10d\n", ++count, n, n*n);
    }
    return 0;
}