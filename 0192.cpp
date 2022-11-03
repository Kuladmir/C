#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("请按如下方式输入年份月份和天数（2022 10 31）:>");
	int year, day, month,ion;
	int sum = 0;
	scanf("%d%d%d", &year, &month, &day);
	switch (month)
	{
	case 1:
		sum = 0;
		break;
	case 2:
		sum = 31;
		break;
	case 3:
		sum = 58;
		break;
	case 4:
		sum = 90;
		break;
	case 5:
		sum = 120;
		break;
	case 6:
		sum = 151;
		break;
	case 7:
		sum = 181;
		break;
	case 8:
		sum = 212;
		break;
	case 9:
		sum = 243;
		break;
	case 10:
		sum = 273;
		break;
	case 11:
		sum = 304;
		break;
	case 12:
		sum = 334;
		break;
	default:
		printf("Error scanf\n");
		break;
	}
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		ion = 1;
	else
		ion = 0;
	if (ion == 1 && month > 2)
		sum++;
	sum = sum + day;
	printf("%d.%d.%d是%d的第%d天\n", year, month, day, year, sum);
	return 0;
}