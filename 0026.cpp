#include<stdio.h>
int main()
{
	struct stu
	{
		char name[20];
		int age;
		int id;
	};
	struct stu s1={"Kuladmir",18,1545652};
	printf("%s\n",s1.name);
	return 0;
}

