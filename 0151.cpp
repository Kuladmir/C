#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* p = fopen("tese.txt", "w");
	if (p == NULL)
		return 0;
	struct S
	{
		int a;
		char b[10];
		float c;
	};
	struct S s = { 5,"Kuladmir",3.14f };
	fprintf(p, "%d %s %f", s.a, s.b, s.c);
	fscanf(p, "%d %s %f", &(s.a), &(s.b), &(s.c));
	printf("%d %s %f", s.a, s.b, s.c);
	fclose(p);
	p = NULL;
	return 0;
}