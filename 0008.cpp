#include<stdio.h>//Сд��ĸ�ĳɴ�д��ĸ
#include<string.h>
int main()
{
	char a[20];
	int b,c,d;
	printf("������һ��20����С�����ַ���;>");
	scanf("%s",a);
	b=strlen(a);
	for(c=0;c<b;c++)
	{
		d=a[c];
		if(97<=d && d<=122)
			d=d-32;
		a[c]=d;
	}
	printf("%s\n",a);
	return 0;
}




