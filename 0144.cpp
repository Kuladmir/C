#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20]="Kulapati Admirmoon";
	char arr2[20];
	strcpy(arr2,arr1);
	printf("%s\n",arr2);
	memset(arr2,'*',8);
	printf("%s\n",arr2);
	return 0;
}

