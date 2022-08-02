#include<stdio.h>
int main()
{
	double a[30];//可改数组元素数目  
	int i,j,k;
	double b=0,t;
	printf("请输入要计算的数据数目(计算时默认减去一个最低分一个最高分)\n");
	scanf("%d",&k);
	printf("当前计算%d个分数平均数\n",k);
	for(i=0;i<=k-1;i++)
		scanf("%lf",&a[i]);
	for(j=0;j<=k-2;j++)
		for(i=0;i<9-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	for(i=1;i<k-1;i++)
		b=b+a[i];
	b=b/(k-2);
	printf("平均分数为%lf(已减去一个最高分一个最低分)\n",b);
	return 0;
}
	



