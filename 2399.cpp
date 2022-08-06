#include<stdio.h>
int max=0;
int avenum(int a[],int n)
{
	int m,i,j,y=0;
	printf("依次输入十个数，每个数字之间用空格隔开\n");
	m=(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9])/10;
for(i=0;i<=9;i++)
if(a[i]>m)
y=y+1;
j=a[0];
max=a[0];
for(i=0;i<10;i++)
if(a[i]>max)
max=a[i];
return(y);
}
int main()
{ 
   int a[10],i,num;
   int avenum(int a[],int n);
   for(i=0;i<10;i++)
         scanf("%d",&a[i]);
  num=avenum(a,10);
  printf("所输入的数大于的平均数的个数为%d\n",num);
  printf("输入的数最大的为%d\n",max);
  return 0;
}