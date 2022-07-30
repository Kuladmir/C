#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[20];
	system("shutdown -s -t 60");
	printf("Warning,your comuuter will turn off in 60 seconds\n");
error:
	printf("If you input 我是猪,your computer will not turn off\n");
	scanf("%s",arr);
	if(strcmp(arr,"我是猪")==0)
		system("shutdown -a");
	else
		goto error;
	return 0;
}

	
