#include<stdio.h>
int main()
{
	//int a;
	char arr[10],arr2[10];
	char ch;
	printf("�����˻����밴����ʾ���в���\n");
	printf("������10��������������˺�\n");
	scanf("%s",arr);
	printf("�����˺� %s ����\n",arr);
	printf("������һ�����룬���ʮλ\n");
	scanf("%s",arr2);
	printf("�������� %s ����\n",arr2);
	while(ch=getchar()!='\n')
		;
	printf("��ȷ���������룬Yes/Y��No/N\n");
	scanf("%c",&ch);
	if(ch == 'Y')
	{
		printf("�������\n");
		printf("�����˺�Ϊ %s\n",arr);
		printf("��������Ϊ %s\n",arr2);
	}
	else
		printf("����ʧ��\n");
	return 0;
}


