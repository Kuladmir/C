#include<stdio.h>//�����һ��
int main()
{
	int a,b,c;
	printf("�����뵱ǰʱ��;>");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=24 || b>=60 || c>=60)
		printf("�������\n");
	else if (a==23 && b==59 && c==59)
		printf("��һ����:> 0:0:0\n");
	else if(a<=23 && b<=59 && c>=0 && c<59)
		printf("��һ����:> %d:%d:%d\n",a,b,c+1);
	else if(a<=23 && b<59 && c==59)
		printf("��һ����:> %d:%d:%d\n",a,b+1,c-59);
	else if(a<23 && b==59 && c==59)
		printf("��һ����:> %d:%d:%d\n",a+1,b-59,c-59);
	return 0;
}
	
