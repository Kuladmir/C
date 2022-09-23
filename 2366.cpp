#include <math.h>
#include <stdio.h>
int prime(int n)
{
    int i;
    long k;
    k=sqrt(n)+1;
    for(i=2; i<=k; i++)
        if(n%i == 0)
            return 0;
    return 1;
}
int main()
{
    int mp, n=0, i;
    printf("Mersenne Prime:\n");
    for(i=2; i<=20; i++)
    {
        mp=pow(2,i)-1;
        if( prime(mp) )
        {
            n++;
            printf("M(%d)=%d", i, mp);
            printf("\n");
        }
    }
    printf("the number of Mersenne Prime less than 20 is:%d\n", n);
   
    return 0;
}