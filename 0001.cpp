#include<stdio.h>
#include<math.h>
void prime(int a)
{
	int b;
	for(b=2;b<=sqrt(a);b++)
	{
		if(a%b==0)
		{
			printf("����\n");
			break;
		}
	}
	if(b>sqrt(a))
		printf("����\n");
}
int main()
{
	int a;
	scanf("%d",&a);
	prime(a);
	return 0;
}
