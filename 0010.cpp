#include<stdio.h>
int main()
{
	int a,i=0,c=0,d;
	int b[10];
	printf("����һ�����֣��ж��ǲ���ˮ�ɻ���;>");
	scanf("%d",&a);
	d=a;
	while(a)
	{
		b[i]=a%10;
		a/=10;
		i++;
	}
	i--;
	while(i!=-1)
	{
		c+=b[i]*b[i]*b[i];
		i--;
	}
	printf("ʵ�������%d����˸�����",c);
	if(c==d)
		printf("��ˮ�ɻ���\n");
	else
		printf("����ˮ�ɻ���\n");
	return 0;
}



