#include<stdio.h>
#include<assert.h>
#include<string.h>
void mycut(char* a, char* b, int x,int y)
{
	assert(a != NULL);
	assert(b != NULL);
	int i;
	for (i = 0; i < x; i++)
	{
		*b = *(a + y - 1 + i);
		b++;
	}
	*b = '\0';
	printf("完成，b为%s", b);
}
int main()
{
	char a[20];
	char b[20]="a";
	gets_s(a);
	int c;
	printf("请输入截断点:>");
	scanf("%d", &c);
	int len1 = strlen(a);
	if (c >= len1)
		printf("Error\n");
	else
		mycut(a, b, len1-c+1,c);
	return 0;
}