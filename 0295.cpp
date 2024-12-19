//计算下一秒,if练习

#include<stdio.h>
void calculate(int hour, int min, int sec)
{
	if (sec < 59)
		printf("现在的时间为: %d:%d:%d", hour, min, sec + 1);
	else if (min < 59)
		printf("现在的时间为: %d:%d:%d", hour, min + 1, sec = 0);
	else if (hour < 23)
		printf("现在的时间为: %d:%d:%d", hour+1, min = 0, sec = 0);
	else
		printf("现在的时间为: %d:%d:%d", hour = 0, min = 0, sec = 0);
}
int main()
{
	printf("请输入现在的时间，例如(23:50:51):>");
	int hour, min, sec;
	scanf("%d", &hour);
	scanf("%d", &min);
	scanf("%d", &sec);
	if ((hour > 0 && hour < 24) && (min > 0 || min < 60) && (sec > 0 && sec < 60))
		calculate(hour, min, sec);
	else
		printf("时间输入错误\n");
	return 0;

}

