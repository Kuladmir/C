#include<stdio.h>
int main()
{
	struct std
	{
		char name[20];
		int age;
		int ID;
	};
	struct std s1={"ÕÅÈý",15,2025654};
	struct std* p=&s1;
	printf("%s\n",(*p).name);
	printf("%s\n",p->name);
	return 0;
}
