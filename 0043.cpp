					


					#include<stdio.h>
					int count_one(unsigned int a)
					{
						int count=0;
						while(a)
						{
							if(a%2 == 1)
								count++;
							a/=2;
						}
						return count;
					}
					int main()
					{
						int a,b;
						scanf("%d",&a);
						b=count_one(a);
						printf("�����ֵĶ����Ʋ�����%d��1\n",b);
						return 0;
					}