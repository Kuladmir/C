#include<stdio.h>
int main()
{
	struct student
	{
		int num;
		double score;
		struct student *next;
	}a,b,c,*p;
	a.num=1;
	a.score=89;
	b.num=2;
	b.score=87;
	c.num=3;
	c.score=96;
	a.next=&b;//指向起始
	b.next=&c;
	c.next=NULL;//不存放地址
	p=&a;
	do
	{
		printf("%ld %5.1f\n",p->num,p->score);//输出p指向的结点数据
		p=p->next;//将结点后移
	}while(p!=NULL);
	return 0;
}
