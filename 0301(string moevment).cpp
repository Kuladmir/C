//string movement

#include<stdio.h>
#include<assert.h>
int My_strlen(char* a)
{
	int count = 0;
	while (*a != '\0')
	{
		count++;
		a++;
	}
	return count;
}
void str_left(char* x)
{
	assert(x != NULL);
	int times, length;
	int i, j;	
	char* tmp_backup = x;
	char tmp = *tmp_backup;
	length = My_strlen(x);
	printf("Input a number for movement:>");
	scanf("%d", &times);
	for (i = 0; i < times; i++)
	{			
		tmp = *tmp_backup;
		for (j = 0; j < length-1; j++)
		{
			*(tmp_backup + j) = *(tmp_backup + j + 1);
		}			
		*(tmp_backup + length-1) = tmp;
	}
	printf("%s\n", tmp_backup);
}
void str_reverse(char* x)
{
	int length = My_strlen(x);
	int i = 0;
	for (i = length - 1; i > -1; i--)
	{
		printf("%c", *(x + i));
	}
	printf("\n");
}
int main()
{
	char a[20];
	gets_s(a);
	//Movement I
	printf("move left\n");
	str_left(a);
	//Movement II
	printf("reverse\n");
	str_reverse(a);
}