#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
printf("         �������������������λ��\a\n");
printf("          ������Ҫ�������������a\n");
scanf("%d",&a);
b=a/1000;
c=(a-b*1000)/100;
d=(a-b*1000-c*100)/10;
e=(a-b*1000-c*100-d*10);
f=e*1000+d*100+c*10+b;
printf("�������������Ϊ  %d\n",f);
return 0;
}