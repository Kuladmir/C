#include<stdio.h>
int main()
{
	int i,a,b,c,d;
	double y=0;
	char arr[10],arr2[10];
	printf("				ģ��ATM��\n");
	printf("		��ʾ���ÿ�����Ϊqwe123\n");
	printf("���������롪��>");
	scanf("%s",arr);
	printf("���ٴ�����һ�Ρ���>");
	scanf("%s",arr2);
	for(i=0,c=0;i<6;i++)
	{
		a=arr[i];
		b=arr2[i];
		if(a!=b)
			c++;
	}
	if(c!=0)
	{
		printf("�������벻һ�£��Ƿ��������룿(1��/0��)");
        scanf("%d",&i);
     	if(i==1)
		{
			printf("���������롪��>");
	        scanf("%s",arr);
	        printf("���ٴ�����һ�Ρ���>");
	        scanf("%s",arr2);
	        for(i=0,c=0;i<6;i++)
			{
		        a=arr[i];
		        b=arr2[i];
		        if(a!=b)
			        c++;
			}
			if(c!=0)
			{
				printf("�������δ������Ŀ��ѱ���������\n");
				d=0;
			}
			else
			{
				 d=1;
				 printf("�������������Ϊ:10080.15\n");
		         printf("���Ŀ������Ϊ:10000.00\n");
			}
		}
		else
		{
            d=0;
			printf("�������벻���ϣ����Ŀ��ѱ���������\n");
		}
	}
	else
	{
		d=1;
		printf("�������������Ϊ:10080.15\n");
		printf("���Ŀ������Ϊ:10000.00\n");
	}
	if(d==1)
	{
	    printf("����������Ҫȡ����˿���1ȡ�0�˿�\n");
	    scanf("%d",&i);
		if(i==1)
		{
			printf("��ѡ�����ȡ����:100��200��500��1000��2000��5000���Զ��塣���Ӧ��������1 2 3 4 5 6 7\n");
			scanf("%d",&a);
			switch(a)
			{
				case 1:
				{
					printf("���Ժ󡭡�\n");
					printf("ȡ��ɹ�����ǰ���9980.15\n");
					printf("���˿������պ�\n");
				}break;
			case 2:
				{
		     		printf("���Ժ󡭡�\n");
					printf("ȡ��ɹ�����ǰ���9880.15\n");
					printf("���˿������պ�\n");
				}break;
			case 3:
				{
		     		printf("���Ժ󡭡�\n");
					printf("ȡ��ɹ�����ǰ���9580.15\n");
					printf("���˿������պ�\n");
				}break;
			case 4:
				{
		     		printf("���Ժ󡭡�\n");
					printf("ȡ��ɹ�����ǰ���9080.15\n");
					printf("���˿������պ�\n");
				}break;
			case 5:
				{
		     		printf("���Ժ󡭡�\n");
					printf("ȡ��ɹ�����ǰ���8080.15\n");
					printf("���˿������պ�\n");
				}break;
			case 6:
				{
					printf("���Ժ󡭡�\n");
					printf("ȡ��ɹ�����ǰ���5080.15\n");
					printf("���˿������պ�\n");
				}break;
			case 7:
				{
					printf("���������ȡ��������ҪΪ100��������\n");
					scanf("%d",&b);
		     		printf("���Ժ󡭡�\n");
					if(b%100 != 0)
					{
						printf("����������˿������պ�\n");
					}
					else
					{
						if(b>10000)
						{
							printf("���㣬�޷�ȡ��\n");
							printf("���˿������պ�\n");
						}
			    		else
						{
							y=10080.15-(double)b;
							printf("ȡ��ɹ�����ǰ���%.2lf\n",y);
			      			printf("���˿������պ�\n");
						}
					}
				}break;
			default :
				printf("�Ҳ����������˿������պ�\n");
				break;
			}
		}
		else
			printf("���˿������պ�\n");
}
		else
				;
	return 0;
}
