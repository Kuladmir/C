#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen(char* a)
{
	assert(a != NULL);
	/*char* b = a;
	while (*a != '\0')
		a++;
	return a - b;*/
	/*int count = 0;
	while (*a != '\0')
	{
		a++;
		count++;
	}
	return count;*/
	if (*a != '\0')
		return 1+my_strlen(a+1);
	else
		return 0;
}
int main()
{
	char a[20];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:>");
	gets_s(a);
	int ret = my_strlen(a);
	printf("%d\n", ret);
	return 0;
}