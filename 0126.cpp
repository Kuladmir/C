#include<stdio.h>//´ÓÁ½±ßÊä³ö welcome to C++
#include<string.h>
int main()
{
	char arr1[]={"welcome to C++"};
	char arr2[]={"##############"};
	int i,j,a,b;
	i=strlen(arr2);
	printf("		%s\n",arr2);
	for(j=0;j<i/2;j++)
	{
		a=arr1[j];
		b=arr1[i-j-1];
		arr2[j]=a;
		arr2[i-j-1]=b;
		printf("		%s\n",arr2);
	}
	return 0;
}


