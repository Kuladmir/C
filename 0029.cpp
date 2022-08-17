#include<stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	printf("ÇëÉÔµÈ£¬ÕýÔÚ¼ÆËã\n");//printf("请输入一个数字\n");
	Sleep(2000);
	for(b=2;b<=sqrt(a);b++)
	{
		if(a%b == 0)
		{
			printf("No\n");
			break;
		}
	}
	if(b>sqrt(a))
		printf("Yes\n");
	return 0;
}

