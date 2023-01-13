#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand();
	int e=0;
	int n=a%200+1;//此处可修改所选整数范围
	printf("                                     帝国行动——斩首行动                    \n");//剧情也是可以修改的
	printf("                    今天，你和帝国士兵商议斩首行动的报酬，帝国士兵安德烈会和你商讨0-200票根的报酬\n");//修改整数后，记得改说明
	int c=0,count=0;
	do{
		printf("                                 请说出你期望的票根（安德烈）:\n");
		scanf("%d",&c);
		count++;
		if(c>n)
		{
			printf("这也太为难我了，我实在给不出这么多（安德烈）\n");
			e++;
		}
		if(c<n)
		{
		printf("你这也太不好了，和我的任务不搭配啊（你）\n");
		e++;
		}
	}while(c!=n);
	printf("你和安德烈谈成了报酬，和帝国友好度+150\n",count);
	printf("累积交谈次数为%d\n",e);
}
