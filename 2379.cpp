#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<conio.h>
#define PI 3.14
#define E 2.7183
void color(short x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);//�˴����޸�������ɫ 1~14
}
int main()
{
	double prime(double x);
	double year(double x);
	double Math(double x);
	color(0);
	double a,b,c,d,e,f,g,h,i,j,k,l,m,n,s;
	int a1,b1,I;
	double str1[1000],str2[1000],str3[1000],S[1000];
	double str[3][3],ste[3][4];
	char bili;
	printf("                                                         \n");
	printf("                                       ������ΪС�ͼ�����[�߽װ�]\n");
	printf("                                       ������Ϊ������˵������ʾ\n");
    printf("              ��ʾ#1  ֧��28�ּ��㷽ʽ������14����ɫ�ɵ��ڣ���Ĭ����ʾС�������λ��Ч���֣��ɸģ�\n");
	printf("              ��ʾ#2  ֧�֦�=3.14���ɸģ���e=2.7183���ɸģ���֧�ֶ�������Ȼ���������ö��������Ǻ���֧�ֳ�������\n");
	printf("              ��ʾ#3  ���м���ʱ���Ͻ��ظ���ָ���������ݹ�����ܳ���#INDOO��ʾ����Ϊϵͳ��һ����׼\n");
	printf("              ��ʾ#4  ���м����ʱ���������Ӧ�ļ�����루���У���֮�������ʾ���в���\n");
	printf("              ��ʾ#5  �������2+5  ������+��֮������2 5��������֮��Ҫ�ӿո񣩣��Ҽ�������ΪӢ�İ�\n");
	printf("              ��9���������#1    ��+  ��-  ��*  ��/  �׳�!  ����#  ���Ǻ���<  ����ֵ=  �����Ǻ���>\n");
	printf("              ��5���������#2    ȡ��?  ����˫��,  �ж�����;  �ж�����:  �ж��Ǽ�λ��_\n");
	printf("              ��5���������#3    �����������������%% �����`  ������~  ָ��^  ����@  \n");
	printf("              ��4���������#4    �ж��ĸ�����Сa   ����GPA b  �ж���������Сc  ����Բ�ཻ�ҳ�d\n");
	printf("              ��4���������#5    �����e  ������f  ���������ܳ������g  ����׺���������ʽh�����㷽����Ľ⣩\n");
	printf("              ��1���������#6    ��������$ \n");
	scanf("%c",&bili);
	switch(bili)
	{
	case'+'://���1
		{
			printf("������Ҫ���㼸�����ĺ�\n");
			scanf("%d",&a1);
			printf("�������\n");
			for(I=0;I<a1;I++)
				scanf("%lf",&S[I]);
			d=0;
		    for(I=0;I<a1;I++)
				d=S[I]+d;
			printf("�����Ϊ%lf\n",d);
		}break;
	case'-'://���2
		{
			printf("������Ҫ���㼸�����Ĳ�\n");
			scanf("%d",&a1);
			printf("���뱻�����ͼ���������������\n");
			for(I=0;I<a1;I++)
				scanf("%lf",&S[I]);
			d=S[0];
			for(I=1;I<a1;I++)
				d=d-S[I];
			printf("�����Ϊ%lf\n",d);
		}break;
	case'*'://���3
		{
			printf("������Ҫ���㼸�����Ļ�\n");
			scanf("%d",&a1);
			printf("�������\n");
			for(I=0;I<a1;I++)
			scanf("%lf",&S[I]);
			d=1;
			for(I=0;I<a1;I++)
				d=S[I]*d;
			printf("�����Ϊ%lf\n",d);
		}break;
	case'/'://����4
		{
			printf("������Ҫ���㼸��������\n");
			scanf("%d",&a1);
			printf("���뱻�����ͳ���������������\n");
			for(I=0;I<a1;I++)
			scanf("%lf",&S[I]);
			s=1;
			for(I=1;I<a1;I++)
			{
				if(S[I]==0)
				{
					printf("error\n");
					s=0;
					break;
				}
				else
					;
			}
			if(s==0)
				break;
			if(s!=0)
			{
			d=S[0];
			for(I=1;I<a1;I++)
				d=d/S[I];
			printf("%lf\n",d);
			}
		}break;
	case'!'://��׳�5
		{		
			printf("������׳���a\n");
			scanf("%lf",&a);
			e=1;
			f=2;
			while(f<=a)
			{
				e=e*f;
				f=f+1;
			}
			printf("�����Ϊ%lf\n",e);
		}break;
	case'#'://�����6
		{
			printf("�����������a\n");
			scanf("%lf",&a);
			d=sqrt(a);
			printf("�����Ϊ%lf\n",d);
		}break;
	case'%'://������7
		{
			printf("��������ͱ�����a,c\n");
			scanf("%lf %lf",&a,&c);
			printf("�����Ϊ%d\n",(int)a%(int)c);
		}break;
	case'@'://�����8
		{
			printf("���������͵���a,c\n");
			printf("Ҫ����Ȼ������ln������c����2.718��Ҫ�㳣�ö�����lg������c����2.7183\n");
			scanf("%lf %lf",&a,&c);
			if(c==2.718)
			{
			d=log(a);
			printf("�����Ϊ%lf\n",d);
			}
			else
			{
				if(c==2.7183)
				{
					d=log10(a);
					printf("�����Ϊ%lf\n",d);
				}
					else
					{
				d=log(a)/log(c);
				printf("�����Ϊ%lf\n",d);
					}
			}
		}break;
	case'^'://��η�9
		{
			printf("���μ����Ƿ�ʹ��ϵͳ�����㷨����e��n�η��������д˼��㣬������1������������0��Ŀǰ��֧��������\n");
			scanf("%lf",&d);
			if(d==1)
			{
				printf("���������Ĵη�\n");
				scanf("%lf",&c);
				e=2;
				f=E;
				while(e<=c)
				{
					f=f*E;
					e++;
				}
				printf("�����Ϊ%lf\n",f);
			}
			if(d!=1)
			{
				printf("��������ʹη�a,c\n");
			scanf("%lf %lf",&a,&c);
			e=2;
			f=a;
			while(e<=c)
			{
				f=f*a;
				e++;
			}	
			printf("�����Ϊ%lf\n",f);
			}
		}break;
	case'`'://�������10
		{
			printf("�����µ������ϵ���a,c\n");
			scanf("%lf %lf",&a,&c);
			i=a-c;
			if(i==0)
				printf("���Ľ��Ϊ1.00\n");
			if(i>0)
			{
            e=1;
			f=2;
			while(f<=a)
			{
				e=e*f;
				f=f+1;
			}
            g=1;
			h=2;
			while(h<=c)
			{
				g=g*h;
				h=h+1;
			}
            j=1;
			k=2;
			while(k<=i)
			{
				j=j*k;
				k=k+1;
			}
			l=j*g;
			d=e/l;
			printf("�����Ϊ%lf\n",d);
			}
			if(i<0 || a==0)
				printf("error\n");
		}break;
	case'~'://��������11
		{
			printf("�����µ������ϵ���a,c\n");
			scanf("%lf %lf",&a,&c);
			i=a-c;
			if(i>=0)
			{
            e=1;
			f=2;
			while(f<=a)
			{
				e=e*f;
				f=f+1;
			}
            j=1;
			k=2;
			while(k<=i)
			{
				j=j*k;
				k=k+1;
			}
			d=e/j;
			printf("�����Ϊ%lf\n",d);
			}
			if(i<0 || a==0)
				printf("error\n");
		}break;
	case'<'://�����Ǻ���12
		{
			printf("���뻡���ƽǶ�a\n");
			scanf("%lf",&a);
			d=sin(a);
			e=cos(a);
			f=tan(a);
		printf("����=%lf\t����=%lf\t����=%lf\t\n",d,e,f);
		if(d!=0)
		{
			g=1/d;
			printf("���csc=%lf\t",g);
		}
		if(e!=0)
		{
			h=1/e;
			printf("����sec=%lf\t",h);
		}
		if(f!=0)
		{
			i=1/f;
			printf("����cot=%lf\n",i);
		}
		}break;
	case'='://�����ֵ13
		{
    	printf("���������ֵ��a\n");
		scanf("%lf",&a);
		d=fabs((float)a);
		printf("%lf\n",(double)d);
		}break;
	case'>'://�����Ǻ���14
		{
		printf("���뻡���ƽǶ�a\n");
		scanf("%lf",&a);
		d=asin(a);
		e=acos(a);
		f=atan(a);
		printf("������arcsin=%lf\t������arccos=%lf\t������arctan=%lf\t\n",d,e,f);
		if(d!=0)
		{
			g=1/d;
			printf("�����arccsc=%lf\t",g);
		}
		if(e!=0)
		{
			h=1/e;
			printf("������arcsec=%lf\t",h);
		}
		if(f!=0)
		{
			i=1/f;
			printf("������arccot=%lf\n",i);
		}
		}break;
	case'?'://ȡ��15
		{
			printf("�����������a\n");
			scanf("%lf",&a);
			d=ceil(a);
			e=floor(a);
			printf("��ȡ��Ϊ%lf\t��ȡ��Ϊ%lf\n",d,e);
		}break;
	case','://��������˫��16
		{
			printf("���뻡���ƽǶ�a\n");
			scanf("%lf",&a);
			d=sinh(a);
			e=cosh(a);
			f=tanh(a);
			printf("����˫��sh=%lf\t����˫��ch=%lf\t����˫��th=%lf\n",d,e,f);
		}break;
	case';'://�ж�����17
		{
			printf("������ж���a\n");
			scanf("%lf",&a);
			d=prime(a);
			if(d==0)
				printf("������Ϊ����\n");
			else
				printf("����������\n");
		}break;
	case':'://�ж�����18
		{
			printf("������ж���a\n");
			scanf("%lf",&a);
			d=year(a);
			if(d==0)
				printf("���겻������\n");
			else
			{
				if(d==1)
					printf("����������\n");
				else
					printf("��������������\n");
			}
		}break;
	case'd'://����Բ�ཻ�ҳ�19
		{
			printf("����һ��ֱ�߷���Ax+By+C=0����׼��Բ�����е� A B C a b\n");
			scanf("%lf %lf %lf %lf %lf",&d,&e,&f,&g,&h);
			if(e==0)
			{
				a=f/d*(-1);
				if(a<=-g || a>=g)
					printf("None\n");
				else
				{
					i=h*h*f*f/(g*g*d*d);
					j=h*h-i;
					k=sqrt(j);
					l=2*k;
					printf("%lf",l);
				}
			}
			else
			{
				c=(4*g*g*h*h*h*h*e*e*e*e+4*g*g*g*g*h*h*d*d*e*e-4*e*e*f*f*g*g*h*h)/(e*e*e*e);
				if(c>=0)
				{
				a=d/e*(-1);
				c=1+a*a;
				i=sqrt(c);
				j=(2*d*f*g*g)/(e*e*h*h+d*d*g*g);//x1+x2
				k=(g*g*f*f-g*g*e*e)/(h*h*e*e+d*d*g*g);//x1*x2
				l=j*j-4*k;
				m=sqrt(l);
				n=i*m;
				printf("�ཻ�ҳ�Ϊ%lf\n",n);
				}
				else
				printf("None\n");
			}
		}break;
	case'e'://�������20
		{
			printf("���������������� Բ��0��Բ׶1����2��������3\n");
			scanf("%lf",&d);
			if(d==0)
			{
				printf("�˴μ���Բ��������������뾶�͸�\n");
				scanf("%lf %lf",&f,&g);
				e=PI*f*f*g;
				printf("���%lf\n",e);
			}
			if(d==1)
			{
				printf("�˴μ���Բ׶������������뾶�͸�\n");
				scanf("%lf %lf",&f,&g);
				e=PI*f*f*g*1/3;
				printf("���%lf\n",e);
			}
			if(d==2)
			{
				printf("�˴μ����������������\n");
				scanf("%lf",&f);
				e=PI*f*f*f*4/3;
				printf("���%lf\n",e);
			}
			if(d==3)
			{
			printf("���μ������������������볤���\n");
			scanf("%lf%lf%lf",&a,&c,&d);
			e=a*c*d;
			printf("%lf\n",e);
			}
		}break;
	case'f'://�������21
		{
            printf("����������������� Բ��0��Բ׶1����2\n");
			scanf("%lf",&d);
			if(d==0)
			{
				printf("�˴μ���Բ������������������뾶�͸�\n");
				scanf("%lf %lf",&f,&g);
				e=PI*f*f;
				h=2*PI*f*g;
				i=e*2+h;
				printf("�µ������%lf�������%lf���ܱ����%lf\n",e,h,i);
			}
			if(d==1)
			{
				printf("�˴μ���Բ׶����������������뾶��ĸ�߳�\n");
				scanf("%lf %lf",&f,&g);
				e=PI*f*f;
				h=PI*f*g;
				i=e+h;
				printf("�������%lf�������%lf���ܱ����%lf\n",e,h,i);
			}
			if(d==2)
			{
				printf("�˴μ�����������������\n");
				scanf("%lf",&f);
				e=4*PI*f*f;
				printf("���%lf\n",e);
			}
		}break;
	case'_'://�����Ǽ�λ��22
		{
		printf("�����������a\n");
		scanf("%lf",&a);
		d=Math(a);
		printf("%lf��%.0lfλ��\n",a,d);
		}break;
	case'a'://�Ƚ��ĸ����Ĵ�С23
		{
			printf("�����ĸ���Ҫ�жϴ�С������\n");
			scanf("%lf%lf%lf%lf",&a,&c,&d,&e);
			printf("ȷ��Ҫ�жϵ�����Ϊ%lf %lf %lf %lf\n",a,c,d,e);
			printf("�������������1���������������0\n");
			scanf("%lf",&f);
			if(f==0)
			{
				printf("�����������ĸ�����\n");
				scanf("%lf%lf%lf%lf",&a,&c,&d,&e);
				printf("������ʼ����\n");
				f=a;
				if(f<c)
					f=c;
				if(f<d)
					f=d;
				if(f<e)
					f=e;
				printf("������Ϊ%lf\n",f);
				printf("��С����Ϊ%lf\n",a);
			}
			if(f==1)
			{
				printf("������ʼ����\n");
				f=a;
				if(f<c)
					f=c;
				if(f<d)
					f=d;
				if(f<e)
					f=e;
				printf("������Ϊ%lf\n",f);
			}
		}break;
    case'b'://����ѧ�ֺ�GPA  24
		{
	printf("        ����������GPA,��Ϊ�ɼ����ձ�\n");
	printf("A+ 4.0\tA 4.0\tA- 3.7\tB+ 3.3\tB 3.0\n");
	printf("B- 2.7\tC+ 2.3\tC 2.0\tD+ 1.5\tD 1.0\n");
	printf("��������Ҫ����Ŀ�Ŀ��\a\n");
	scanf("%d",&a1);
if(a1==1)
	{
		printf("���뼨��ɼ����������Ӧѧ�֣�ע�����������Ҫ��Ӧ��Ŀ������������ӻس�������֮��ӿո�\n");
		scanf("%lf",&str1[0]);
		scanf("%lf",&str2[0]);
		a=str1[0];
		printf("%lf\n",a);
	}
	if(a1!=1)
	{
		c=0;
		a=0;
		printf("�����Ӧ�����ļ���ɼ����س���һ������ѧ��\n");
		printf("��ǰ����%d�ſε�GPA(��λС������������)\n",a1);
		for(b1=0;b1<a1;b1++)
			scanf("%lf",&str1[b1]);
        for(b1=0;b1<a1;b1++)
			scanf("%lf",&str2[b1]);
		for(b1=0;b1<a1;b1++)
			c=c+str2[b1];
		for(b1=0;b1<a1;b1++)
			str3[b1]=str1[b1]*str2[b1];
		for(b1=0;b1<a1;b1++)
			a=str3[b1]/c+a;
		printf("�����Ŀ��ѧ��Ϊ %lf\n",c);
		printf("�����Ŀ��GPAΪ  %lf\n",a);
	}
		}break;
	case'c'://�Ƚ��������Ĵ�С25
		{
			printf("����Ҫ�жϴ�С����������\n");
			scanf("%lf%lf",&a,&c);
			if(a>c)
				printf("%lf��%lf��\n",a,c);
			else
				if(a<c)
					printf("%lf��%lf��\n",c,a);
				else
					printf("%lf = %lf",a,c);
		}break;
	case'g'://������������ܳ�26
		{
	printf("������֪����Ѱ�����еļ��㷽ʽ\n");
	printf("1.ֱ����������֪��ֱ�Ǳ߻������ε׺͸ߣ�����0\n");
	printf("2.��֪���ߣ�����1\n");
	printf("3.��֪��������һ�����Խǣ�����2\n");
	scanf("%lf",&n);
	if(n==0)
		{
		    printf("������߳���׸�\n");
	        scanf("%lf%lf",&a,&b);
	        c=a*b*0.5;
	        printf("Answer is %lf\n",c);
		}
	if(n==1)
		{
		    printf("���������߳�\n");
			scanf("%lf%lf%lf",&a,&b,&c);
			d=(a+b+c)/2;
			s=d*(d-a)*(d-b)*(d-c);
			s=sqrt(s);
			printf("Answer is %lf\n",s);
		}
	if(n==2)
		{
			printf("����Ƕ�Ϊ30���150�㣬����������1��\n����Ƕ�Ϊ45���135�㣬������2��\n����Ƕ�Ϊ60���120�㣬������3��\n����Ƕ�Ϊ90�㣬������4\n");
			scanf("%lf%lf%lf",&a,&b,&c);
			if(c==1)
			{
				s=0.5*a*b*0.5;
				printf("Answer is %lf\n",s);
			}
            if(c==2)
			{
				s=0.5*a*b*0.5;
				printf("Answer is %lf��2\n",s);
			}
			if(c==3)
			{
				s=0.5*a*b*0.866;
				printf("Answer is %lf��3\n",s);
			}
			if(c==4)
			{
				s=0.5*a*b;
				printf("Answer is &lf\n",s);
			}
		}
		}break;
	case'h'://������ʽ27
		{				
			printf("���μ�������ʽ�������������2��������������3\n");
			printf("���Ҫ�����Ԫһ�η�����Ľ⣬����4,������Ԫһ�β���ʽ�Ľ⣬����5\n");
			scanf("%lf",&a);
			if(a==2)
			{
				printf("���Ҫ����2*3���ͣ����������3���������2*2���ͣ����������2\n");
				scanf("%lf",&m);
				if(m==2)
				{
				printf("���μ�����׶��ж�������ʽ������һ��һ��˳��,������һ��Ҫ�س�\n");
				scanf("%lf%lf%lf%lf",&c,&d,&e,&f);
				printf("���μ��������ʽΪ\n");
				printf("          |%lf  %lf|\n ",c,d);
				printf("         |%lf  %lf|\n ",e,f);
				g=c*f-d*e;
                printf("���Ľ���ǣ�%lf\n",g);
				}
				if(m==3)
				{
				printf("���μ�����׶�����������ʽ������һ��һ��˳��,������һ��Ҫ�س�\n");
				scanf("%lf%lf%lf%lf%lf%lf",&c,&d,&e,&f,&g,&h);
				printf("���μ��������ʽΪ\n");
				printf("          |%lf  %lf  %lf|\n ",c,d,e);
				printf("         |%lf  %lf  %lf|\n ",f,g,h);
				i=c*g+d*h+e*f-d*f-e*g-c*h;
                printf("���Ľ���ǣ�%lf\n",i);
				}

			}
			if(a==3)
			{
				printf("���μ�����������ʽ������һ��һ��˳��������һ��Ҫ�س�\n");
				scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf",&str[0][0],&str[0][1],&str[0][2],&str[1][0],&str[1][1],&str[1][2],&str[2][0],&str[2][1],&str[2][2]);
				printf("���μ��������ʽΪ\n");
				printf("          |%lf %lf %lf|\n",str[0][0],str[0][1],str[0][2]);
                printf("          |%lf %lf %lf|\n",str[1][0],str[1][1],str[1][2]);
				printf("          |%lf %lf %lf|\n",str[2][0],str[2][1],str[2][2]);
				c=str[0][0]*str[1][1]*str[2][2]+str[0][1]*str[1][2]*str[2][0]+str[0][2]*str[1][0]*str[2][1];
				d=str[0][2]*str[1][1]*str[2][0]+str[0][1]*str[1][0]*str[2][2]+str[0][0]*str[1][2]*str[2][1];
				e=c-d;
				printf("%lf\n",e);
			}
			if(a==4)
			{
				printf("���μ����Ԫһ�η�����Ľ⣬һ�������������������\n");
				printf("���磺x+y=2,2x+3y=6�������� 1 1 2 2 3 6��ϵ��һ��Ҫ��Ӧ\n");
				scanf("%lf%lf%lf%lf%lf%lf",&c,&d,&e,&f,&g,&h);
				i=c*g-d*f;
				if(i==0)
				{
					j=e*g-d*h;
					k=c*h-e*f;
					if(j==0 && k==0)
					printf("�˷�����������\n");
					else
					printf("�˷����޽�\n");
				break;
				}
				if(i!=0)
				{
					j=e*g-d*h;
					k=c*h-e*f;
					printf("x=%lf\ty=%lf\n",j/i,k/i);
				}
			}
			if(a==5)
			{
				printf("���μ�����Ԫһ�η���ʽ�Ľ⣬���������������������\n");
				printf("���磺x+y+z=1,x+2y+3z=6,2x+3y+4z=9��������1 1 1 1 1 2 3 6 2 3 4 9��ϵ��һ��Ҫ��Ӧ\n");
				for(a1=0;a1<3;a1++)
					for(b1=0;b1<4;b1++)
						scanf("%lf",&ste[a1][b1]);
				b=ste[0][0]*ste[1][1]*ste[2][2]+ste[0][1]*ste[1][2]*ste[2][0]+ste[0][2]*ste[1][0]*ste[2][1];
				c=ste[0][0]*ste[1][2]*ste[2][1]+ste[0][1]*ste[1][0]*ste[2][2]+ste[0][2]*ste[1][1]*ste[2][0];
				d=b-c;
				if(d==0)
				{
					e=ste[0][3]*ste[1][1]*ste[2][2]+ste[0][1]*ste[1][2]*ste[2][3]+ste[0][2]*ste[1][3]*ste[2][1];
					f=ste[0][3]*ste[1][2]*ste[2][1]+ste[0][1]*ste[1][3]*ste[2][2]+ste[0][2]*ste[1][1]*ste[2][3];
					g=e-f;
					b=ste[0][0]*ste[1][3]*ste[2][2]+ste[0][3]*ste[1][2]*ste[2][0]+ste[0][2]*ste[1][0]*ste[1][3];
					c=ste[0][0]*ste[1][2]*ste[2][3]+ste[0][3]*ste[1][0]*ste[2][2]+ste[0][2]*ste[1][3]*ste[2][0];
					a=b-c;
					h=ste[0][0]*ste[1][1]*ste[2][3]+ste[0][1]*ste[1][3]*ste[2][0]+ste[0][3]*ste[1][0]*ste[2][1];
					i=ste[0][0]*ste[1][3]*ste[2][1]+ste[0][1]*ste[1][0]*ste[2][3]+ste[0][3]*ste[1][1]*ste[2][0];
					j=h-i;
					if(g==0 && a==0 && j==0)
						printf("�˷������޽���ж��\n");
					else
						printf("�˷������޽�\n");
				}
				if(d!=0)
				{
					e=ste[0][3]*ste[1][1]*ste[2][2]+ste[0][1]*ste[1][2]*ste[2][3]+ste[0][2]*ste[1][3]*ste[2][1];
					f=ste[0][3]*ste[1][2]*ste[2][1]+ste[0][1]*ste[1][3]*ste[2][2]+ste[0][2]*ste[1][1]*ste[2][3];
					g=e-f;
					b=ste[0][0]*ste[1][3]*ste[2][2]+ste[0][3]*ste[1][2]*ste[2][0]+ste[0][2]*ste[1][0]*ste[1][3];
					c=ste[0][0]*ste[1][2]*ste[2][3]+ste[0][3]*ste[1][0]*ste[2][2]+ste[0][2]*ste[1][3]*ste[2][0];
					a=b-c;
					h=ste[0][0]*ste[1][1]*ste[2][3]+ste[0][1]*ste[1][3]*ste[2][0]+ste[0][3]*ste[1][0]*ste[2][1];
					i=ste[0][0]*ste[1][3]*ste[2][1]+ste[0][1]*ste[1][0]*ste[2][3]+ste[0][3]*ste[1][1]*ste[2][0];
					j=h-i;
					printf("x=%lf\ty=%lf\tz=%lf\n",g/d,a/d,j/d);
				}
			}
		}break;
	case'$'://������Ϣ28
		{
			printf("���뱾��Ԫ�������ʣ�Ĭ��Ϊ%%����ʱ�䣨���ʵ�λ��ʱ�䵥λӦ��ͳһ��\n");
			scanf("%lf%lf%lf",&a,&b,&c);
			d=a*b*c*0.01;
			printf("�ɻ������Ϊ:%lf\n",d);
		}break;
	}
 return 0;
}
double prime(double x)//����1���ж��Ƿ�Ϊ����
{
	double m,k,i;
if(x<=2)
{
	if(x==2)
		m=1;
	else
		m=0;
}
if(x>2 && x<=10000)
{
	for(i=2;i<x;i++)
		if((int)x%(int)i==0)
			break;
		if(i<x)
			m=0;
		else
			m=1;
}
if(x>10000)
{
k=sqrt(x);
for(i=2;i<=k;i++)
if((int)x%(int)i==0)
break;
if(i>=k+1)
	m=1;
else
m=0;
}
return(m);
}
double year(double x)//����2���ж��Ƿ�Ϊ����
{
	double a;
	if((int)x%4==0)
	{
		if((int)x%100==0)
		{
			if((int)x%400==0)
				a=2;
			else
				a=0;
		}
		else
			a=1;
	}
	else
		a=0;
return(a);
}
double Math(double x)//����3���ж��Ǽ�λ��
{
	double a=0,b;
	if(x<10)
	{
		a=1;
	return(a);
	}
    if(x>10)
	{
	    a=1;
		while(x>10)
		{
			
			b=(int)x%10;
			x=x/10;
			a++;
		}
		return(a);
	}
}








