#include<stdio.h>//�ݹ飺��һ������ÿλ�ֿ����������Ǽ�λ��
int c=0;
int d=0;
void pr(int a)
{
	if(a>9)
	{   
		pr(a/10);
	}
	printf("%d",a%10);
	c++;
	d=a%10+d;
	printf("(%d) ",c);
}

int main()
{
	int a;
	scanf("%d",&a);
	pr(a);
	return 0;
}
