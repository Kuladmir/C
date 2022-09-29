#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char str[80];
	float f;
	FILE* pFile;

	pFile = fopen("myfile.txt", "w+");
	fprintf(pFile, "%f %s", 3.14156, "PI");
	rewind(pFile);
	fscanf(pFile, "%f", &f);
	fscanf(pFile, "%s", str);
	fclose(pFile);
	printf("I have read: %f and %s \n", f, str);
	return 0;
}
