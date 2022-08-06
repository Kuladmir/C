#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
printf("         本程序用来反向输出四位数\a\n");
printf("          输入想要反向输出的数字a\n");
scanf("%d",&a);
b=a/1000;
c=(a-b*1000)/100;
d=(a-b*1000-c*100)/10;
e=(a-b*1000-c*100-d*10);
f=e*1000+d*100+c*10+b;
printf("反向输出的数字为  %d\n",f);
return 0;
}