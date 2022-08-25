						


						#include<stdio.h>
						int count_one(int a)
						{
							int count=0;
							while(a)
							{
								a=a&(a-1);
								count++;
							}
							return count;
						}

						int main()
						{
							int a,b;
							scanf("%d",&a);
							b=count_one(a);
							printf("该数字的二进制补码有%d个1\n",b);
							return 0;
						}
