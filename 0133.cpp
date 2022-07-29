#include<stdio.h>//判断是否为合数
#include<math.h>
int main()
{
	int i,c;
	scanf("%d",&i);
	if(i==2)
		printf("No\n");
	else if(i==1)
		printf("No\n");
	else
	{
		for(c=2;c<=sqrt(i);c++)
		{
			if(i%c==0)
			{
				printf("Yes\n");
				break;
			}
		}
	}
	if(c>sqrt(i))
		printf("No\n");
	return 0;
}


