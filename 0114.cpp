#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%2 == 1)
		printf("%dÊÇÆæÊý\n",a);//输出奇数
	else 
		printf("%dÊÇÅ¼Êý\n",a);//输出偶数
	return 0;
}
