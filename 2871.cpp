#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch,filename[10];
	printf("请输入文件名\n");
	scanf("%s",filename);
	getchar();//消化输入的换行符
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("Can not open file\n");
	    exit(0);//关闭程序
	}
	printf("输入存在磁盘的字符串，#结尾\n");
	ch=getchar();
	while(ch!='#')//判断字符串的结尾
	{
		fputc(ch,fp);//将输入的字符输入到磁盘文件
		putchar(ch);//输出字符
		ch=getchar();//输入字符
	}
	fclose(fp);//关闭文件
	putchar(10);//输出换行符
	return 0;
}
