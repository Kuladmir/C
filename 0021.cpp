#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,b;
	do
	{
		printf("1��ʼ���㣬0�˳�\n");
		scanf("%d",&b);
		switch(b)
		{
		case 1:
			{
				printf("������;> ");
				scanf("%d",&a);
				for(i=2;i<=sqrt(a);i++)
				{
					if(a%2 == 0)
					{
						printf("�Ǻ���\n");
						break;
					}
				}
				if(i>sqrt(a))
					printf("������\n");
			}break;
		case 0:
			;break;
		default :
			printf("�������\n");
			break;
		}
	}while(b);
	return 0;
}

