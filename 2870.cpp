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
	a.next=&b;//ָ����ʼ
	b.next=&c;
	c.next=NULL;//����ŵ�ַ
	p=&a;
	do
	{
		printf("%ld %5.1f\n",p->num,p->score);//���pָ��Ľ������
		p=p->next;//��������
	}while(p!=NULL);
	return 0;
}
