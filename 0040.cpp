#include<stdio.h>
int main()
{
	int a[10]={0};
	int* p;
	for(p=&a[9];p>&a[0];)
		*--p=10;
	for(p=&a[0];p<=&a[9];p++)
		printf("%d ",*p);
	return 0;
}

