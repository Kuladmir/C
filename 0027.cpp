#include<stdio.h>
int main()
{
	struct stu
	{
		char name[20];
		int age;
		int id;
	};
	struct stu s1={"kuladmir",20,1546456};
	struct stu* p = &s1;
	printf("%s\n",(*p).name);
	printf("%d\n",p->age);
	return 0;
}