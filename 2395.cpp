#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a;
    char  id[18];
	int i,c[18],n,j,b;
	printf("依次输入身份证的前十七位数字，每个数字之间不加空格\n");
	for(i=0;i<=16;i++)
		scanf("%c",&id[i]);
for(i=0;i<=16;i++)
c[i]=id[i]-'0';
	j=7*c[0]+9*c[1]+10*c[2]+5*c[3]+8*c[4]+4*c[5]+2*c[6]+c[7]+6*c[8]+3*c[9]+7*c[10]+9*c[11]+10*c[12]+5*c[13]+8*c[14]+4*c[15]+2*c[16];
	n=j%11;
	if(n==0)
	{b=1;printf("%d\n",b);}
	if(n==1)
	{b=0;printf("%d\n",b);}
	if(n==2)
	{a='X';printf("%c\n",a);}
	if(n==3)
	{b=9;printf("%d\n",b);}
	if(n==4)
	{b=8;printf("%d\n",b);}
	if(n==5)
	{b=7;printf("%d\n",b);}
	if(n==6)
	{b=6;printf("%d\n",b);}
	if(n==7)
	{b=5;printf("%d\n",b);}
	if(n==8)
	{b=4;printf("%d\n",b);}
	if(n==9)
	{b=3;printf("%d\n",b);}
	if(n==10)
	{b=2;printf("%d\n",b);}
	return 0;
}