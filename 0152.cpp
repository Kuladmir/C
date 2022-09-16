#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pf = fopen("test.txt", "wb");
	struct S
	{
		char a[10];
		int age;
		int ID;
	};
	struct S s = { "Kuladmir",10,2020 };
	struct S tmp;
	fwrite(&s, sizeof(s), 1, pf);
	fread(&tmp, sizeof(s), 1, pf);
	printf("%s %d %d\n", tmp.a, (size_t)tmp.age, tmp.ID);
	fclose(pf);
	pf = NULL;
	return 0;
}
