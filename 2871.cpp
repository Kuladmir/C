#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch,filename[10];
	printf("�������ļ���\n");
	scanf("%s",filename);
	getchar();//��������Ļ��з�
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("Can not open file\n");
	    exit(0);//�رճ���
	}
	printf("������ڴ��̵��ַ�����#��β\n");
	ch=getchar();
	while(ch!='#')//�ж��ַ����Ľ�β
	{
		fputc(ch,fp);//��������ַ����뵽�����ļ�
		putchar(ch);//����ַ�
		ch=getchar();//�����ַ�
	}
	fclose(fp);//�ر��ļ�
	putchar(10);//������з�
	return 0;
}
