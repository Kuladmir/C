#include<stdio.h>//��ϰ1.�������������Լ��
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a%b==0)
		printf("%d\n",b);
	else
	{
		while(c=a%b)
		{
			a=b;
			b=c;
		}
		printf("%d\n",b);
	}
	return 0;
}



