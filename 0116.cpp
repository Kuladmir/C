#include<stdio.h>
int main()
{
	int a,b;
	printf("����1����1ģʽ������2����2ģʽ\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("����������\n");
		scanf("%d",&b);
		switch(b)
		{
		case 1:
			printf("����һ\n");
			break;
		case 2:
			printf("���ڶ�\n");
			break;
		case 3:
			printf("������\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 5:
			printf("������\n");
			break;
		case 6:
			printf("������\n");
			break;
		case 7:
			printf("������\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	}
	else
	{
		printf("����������\n");
		scanf("%d",&b);
		switch(b)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("������\n");
			break;
		case 6:
		case 7:
			printf("��Ϣ��\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	}
	return 0;
}


