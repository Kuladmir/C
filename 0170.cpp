#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
void judge(char* a,char* b)
{
	assert(a != NULL);
	assert(b != NULL);
	int sz = strlen(a);
	strncat(a, a, sz);
	char* p = strstr(a, b);
	if (p == NULL)
		printf("Î´ÕÒµ½\n");
	else
		printf("ÒÑÕÒµ½\n");
}
int main()
{
	char a[20], b[20];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:>");
	scanf("%s", a);
	printf("ÇëÊäÈë²éÕÒµÄ×Ö·û´®:>");
	scanf("%s", b);
	judge(a,b);
	return 0;
}