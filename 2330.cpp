#include<stdio.h>
int main()
{
	double a,b,c,d,e,f,g,h,i,j;//������ģ����ҲҪ��
	printf("                      ���μ���֧��˫���ȸ�������\n");
	printf("                      ���������һ������a+b����ֵ��\n");
	printf("                      ��������ڶ�������a+b����c�ĳ˻���\n");
	printf("                      ���������������������˻���d�Ĳ�ֵ��\n");
    printf("                      ����������Ĳ�����������e�׳˵ĺ͡�\n");
    printf("                      ����������Ҫ�����5�����֣�\n");
	scanf("                        %lf,%lf,%lf,%lf,%lf",&a,&b,&c,&d,&e);
	f=a+b;
	g=f*c;
	h=g-d;
	double k,l;
	k=1;
	l=2;
	while(l<=e)
	{
		k=k*l;
	    l=l+1;
	}
    i=k;
	j=h+i;
	printf("                        The calculate is    %lf\n",j);
    printf("                       ��ӭ�ٴ�ʹ�ú��޸ı����򣡣���\n");
	return 0;
}