#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("�������������ж��Ƿ�Ϊֱ����������\n");
	scanf("%d%d%d",&a,&b,&c);
	d=a*a;
	e=b*b;
	f=c*c;
	if(d==b*b+c*c || e==a*a+c*c || f==a*a+b*b)
		printf("����������ֱ����������\n");
	else
		printf("������������\n");
	return 0;
}