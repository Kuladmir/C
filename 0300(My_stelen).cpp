//My_strlen¼ÆËã×Ö·û´®
#include<stdio.h>
void My_strlen1(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	printf("The string is(are) %d.\n", count);
}
void My_strlen2(char* arr)
{
	int count = 0;
	char* tmp = arr;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	printf("The string is(are) %d.\n", arr-tmp);
}
int My_strlen3(char* arr)
{
	if (*arr != '\0')
		return 1 + My_strlen3(arr + 1);
	else
		return 0;
}
int main()
{
	char a[20];
	printf("Input a string:>");
	gets_s(a);
	printf("Method I:>");
	My_strlen1(a);
	printf("\n");
	printf("Method II:>");
	My_strlen2(a);
	printf("\n");
	printf("Method III:>");
	int t3=My_strlen3(a);
	printf("The string is(are) %d.\n",t3);
	return 0;
}
