#include<stdio.h>
#include<math.h>
int main()
{
	int i,c;
	scanf("%d",&i);
	for(c=2;c<=sqrt(i);c++)
	{
		if(i%c==0)
		{
			printf("Yes\n");
			break;
		}
	}
	if(c>sqrt(i))
		printf("No\n");
	return 0;
}


