#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand();
	int e=0;
	int n=a%200+1;//�˴����޸���ѡ������Χ
	printf("                                     �۹��ж�����ն���ж�                    \n");//����Ҳ�ǿ����޸ĵ�
	printf("                    ���죬��͵۹�ʿ������ն���ж��ı��꣬�۹�ʿ�������һ��������0-200Ʊ���ı���\n");//�޸������󣬼ǵø�˵��
	int c=0,count=0;
	do{
		printf("                                 ��˵����������Ʊ���������ң�:\n");
		scanf("%d",&c);
		count++;
		if(c>n)
		{
			printf("��Ҳ̫Ϊ�����ˣ���ʵ�ڸ�������ô�ࣨ�����ң�\n");
			e++;
		}
		if(c<n)
		{
		printf("����Ҳ̫�����ˣ����ҵ����񲻴��䰡���㣩\n");
		e++;
		}
	}while(c!=n);
	printf("��Ͱ�����̸���˱��꣬�͵۹��Ѻö�+150\n",count);
	printf("�ۻ���̸����Ϊ%d\n",e);
}
