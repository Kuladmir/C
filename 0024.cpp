#include<stdio.h>
int main()
{
	int i,j,c;
	printf("�����������;> ");
	scanf("%d",&c);//�ɿ������������������9�����99�˷���
	for(i=1;i<=c;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d * %d = %2d  ",i,j,i*j);//%2d��ʾ���Ҷ���
		printf("\n");
	}
	return 0;
}


