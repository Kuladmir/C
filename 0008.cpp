#include<stdio.h>//小写字母改成大写字母
#include<string.h>
int main()
{
	char a[20];
	int b,c,d;
	printf("请输入一个20个大小以内字符串;>");
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




