#include<stdio.h>
#include<stdlib.h>
int main()
{
	char id[18];
	int idi[18],i,j,n,g;
	for(i=0;i<18;i++)
		scanf("%c",&id[i]);
	for(i=0;i<17;i++)
		idi[i]=id[i]-'0';
	j=j=7*idi[0]+9*idi[1]+10*idi[2]+5*idi[3]+8*idi[4]+4*idi[5]+2*idi[6]+idi[7]+6*idi[8]+3*idi[9]+7*idi[10]+9*idi[11]+10*idi[12]+5*idi[13]+8*idi[14]+4*idi[15]+2*idi[16];
	n=j%11;
    g=id[17];
	if(n==0)
	{
		if(g==49)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	if(n==1)
	{
		if(g==48)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	if(n==2)
	{
		if(g==88)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	if(n==3)
	{
		if(g==57)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	if(n==4)
	{
		if(g==56)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	if(n==5)
	{
		if(g==55)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	if(n==6)
	{
		if(g==54)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	if(n==7)
	{
		if(g==53)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	if(n==8)
	{
		if(g==52)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	if(n==9)
	{
		if(g==51)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	if(n==10)
	{
		if(g==50)
			printf("��Ч\n");
		else
			printf("��Ч\n");
	}
	return 0;
}







