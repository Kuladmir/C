			


			#include<stdio.h>
			int strl(char* str)
			{
				if(*str !='\0')
					return 1+strl(str+1);
				else
					return 0;
			}

			int main()
			{
				char a[]="kuladmir";
				int l=strl(a);
				printf("%d\n",l);
				return 0;
			}
