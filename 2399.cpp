#include<stdio.h>
int max=0;
int avenum(int a[],int n)
{
	int m,i,j,y=0;
	printf("��������ʮ������ÿ������֮���ÿո����\n");
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
  printf("������������ڵ�ƽ�����ĸ���Ϊ%d\n",num);
  printf("�����������Ϊ%d\n",max);
  return 0;
}