#include<stdio.h>//输出下一秒
int main()
{
	int a,b,c;
	printf("请输入当前时间;>");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=24 || b>=60 || c>=60)
		printf("输入错误\n");
	else if (a==23 && b==59 && c==59)
		printf("下一秒是:> 0:0:0\n");
	else if(a<=23 && b<=59 && c>=0 && c<59)
		printf("下一秒是:> %d:%d:%d\n",a,b,c+1);
	else if(a<=23 && b<59 && c==59)
		printf("下一秒是:> %d:%d:%d\n",a,b+1,c-59);
	else if(a<23 && b==59 && c==59)
		printf("下一秒是:> %d:%d:%d\n",a+1,b-59,c-59);
	return 0;
}
	
