#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("请输入年份 月份 日期:>");
	scanf("%d%d%d",&a,&b,&c);
	if((a%4==0 && a%100!=0) || (a%400==0))
		d=1;
	else 
		d=0;
	switch(b)
	{
	case 1:
		printf("今天是%d年的第%d天\n",a,c);
		break;
	case 2:
		printf("今天是%d年的第%d天\n",a,c+31);
		break;
	case 3:
		{
			if(d==1)
				printf("今天是%d年的第%d天\n",a,c+60);
			else
				printf("今天是%d年的第%d天\n",a,c+59);
		}break;
	case 4:
		{
			if(d==1)
				printf("今天是%d年的第%d天\n",a,c+91);
			else
				printf("今天是%d年的第%d天\n",a,c+90);
		}break;
	case 5:
		{
			if(d==1)
				printf("今天是%d年的第%d天\n",a,c+121);
			else
				printf("今天是%d年的第%d天\n",a,c+120);
		}break;
	case 6:
		{
			if(d==1)
				printf("今天是%d年的第%d天\n",a,c+152);
			else
				printf("今天是%d年的第%d天\n",a,c+151);
		}break;
	case 7:
		{
			if(d==1)
				printf("今天是%d年的第%d天\n",a,c+182);
			else
				printf("今天是%d年的第%d天\n",a,c+181);
		}break;
	case 8:
		{
			if(d==1)
				printf("今天是%d年的第%d天\n",a,c+213);
			else
				printf("今天是%d年的第%d天\n",a,c+212);
		}break;
	case 9:
		{
			if(d==1)
				printf("今天是%d年的第%d天\n",a,c+244);
			else
				printf("今天是%d年的第%d天\n",a,c+243);
		}break;
	case 10:
		{
			if(d==1)
				printf("今天是%d年的第%d天\n",a,c+274);
			else
				printf("今天是%d年的第%d天\n",a,c+273);
		}break;
	case 11:
		{
			if(d==1)
				printf("今天是%d年的第%d天\n",a,c+305);
			else
				printf("今天是%d年的第%d天\n",a,c+304);
		}break;
	case 12:
		{
			if(d==1)
				printf("今天是%d年的第%d天\n",a,c+335);
			else
				printf("今天是%d年的第%d天\n",a,c+334);
		}break;
	default :
		printf("输入错误\n");
		break;
	}
	return 0;
}



