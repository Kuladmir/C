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

int factorial(int x)//����4������׳�
{
	int a1 = 1;
	int b1 = 2;
	while (b1 <= x)
	{
		a1 *= b1;
		b1++;
	}
	return a1;
}

int comb(int x, int y)//����4�����������
{
	//x���ϵ�����y���µ���
	int result;
	result = factorial(y) / (factorial(x) * factorial(y - x));
	return result;
}

int perm(int x, int y)//����5������������
{
	int result;
	result = factorial(y) / factorial(y - x);
	return result;
}

void manu2()
{
		printf("                                       �� ����Ϊ������������˵������ʾ\n");
    printf("              ��ʾ#1  ֧��28�ּ��㷽ʽ������14����ɫ�ɵ��ڣ���Ĭ����ʾС�������λ��Ч���֣��ɸģ�\n");
	printf("              ��ʾ#2  ֧�֦�=3.14���ɸģ���e=2.7183���ɸģ���֧�ֶ�������Ȼ���������ö��������Ǻ���֧�ֳ�������\n");
	printf("              ��ʾ#3  ���м���ʱ���Ͻ��ظ���ָ���������ݹ�����ܳ���#INDOO��ʾ����Ϊϵͳ��һ����׼\n");
	printf("              ��ʾ#4  ���м����ʱ���������Ӧ�ļ�����루���У���֮�������ʾ���в���\n");
	printf("              ��ʾ#5  �������2+5  ������+��֮������2 5��������֮��Ҫ�ӿո񣩣��Ҽ�������ΪӢ�İ�\n");
	printf("              ��9���������#1    ��1  ��2  ��3  ��4  �׳�5  ����6  �����������������7  ����8  ָ��9    \n");
	printf("              ��5���������#2    �����10  ������11  ���Ǻ���12  ����ֵ13  �����Ǻ���14  ȡ��15\n");
	printf("              ��5���������#3    ����˫��16  �ж�����17  �ж�����18  ����Բ�ཻ�ҳ�19  �����20\n");
	printf("              ��4���������#4    ������21  �ж��Ǽ�λ��22  �ж��ĸ�����С23   ����GPA 24  \n");
	printf("              ��4���������#5    �ж���������С25   ���������ܳ������26  ����׺���������ʽ27�����㷽����Ľ⣩\n");
	printf("              ��1���������#6    ��������28 \n");
}
void begin()
{
	double a,b,c,d,e,f,g,h,i,j,k,l,m,n,s;
	int count,result,I,a1,b1;
	double str1[1000],str2[1000],str3[1000],S[1000];
	double str[3][3],ste[3][4];
	int bili;
	char judge;
	do
	{
		printf("--------------------�ָ���--------------------\n");
		printf("���ڿ�ʼ���м��㣬�������㷨����   :>  ");
		scanf("%d", &bili);
		switch (bili)
		{
		case 1://���1
		{
			printf("������Ҫ���㼸�����ĺ�   :>  ");
			scanf("%d", &a1);
			printf("������%d������   :>  ", a1);
			for (I = 0; I < a1; I++)
				scanf("%lf", &S[I]);
			d = 0;
			for (I = 0; I < a1; I++)
				d = S[I] + d;
			printf("�����Ϊ:>  %lf\n", d);
		}break;
		case 2://���2
		{
			printf("������Ҫ���㼸�����Ĳ�   :>  ");
			scanf("%d", &a1);
			printf("���뱻������%d����������������   :>  ", a1 - 1);
			for (I = 0; I < a1; I++)
				scanf("%lf", &S[I]);
			d = S[0];
			for (I = 1; I < a1; I++)
				d = d - S[I];
			printf("�����Ϊ:>  %lf\n", d);
		}break;
		case 3://���3
		{
			printf("������Ҫ���㼸�����Ļ�   :>  ");
			scanf("%d", &a1);
			printf("����%d������   :>  ", a1);
			for (I = 0; I < a1; I++)
				scanf("%lf", &S[I]);
			d = 1;
			for (I = 0; I < a1; I++)
				d = S[I] * d;
			printf("�����Ϊ:>  %lf\n", d);
		}break;
		case 4://����4
		{
			printf("������Ҫ���㼸��������   :>  ");
			scanf("%d", &a1);
			printf("���뱻������%d������������������   :>  ", a1 - 1);
			for (I = 0; I < a1; I++)
				scanf("%lf", &S[I]);
			s = 1;
			for (I = 1; I < a1; I++)
			{
				if (S[I] == 0)
				{
					printf("error\n");
					s = 0;
					break;
				}
				else
					;
			}
			if (s == 0)
				break;
			if (s != 0)
			{
				d = S[0];
				for (I = 1; I < a1; I++)
					d = d / S[I];
				printf("�����Ϊ:>  %lf\n", d);
			}
		}break;
		case 5://��׳�5
		{
			printf("������׳���   a:>  ");
			scanf("%d", &a1);
			result = factorial(a1);
			printf("�����Ϊ:>  %d\n", result);
		}break;
		case 6://�����6
		{
			printf("�����������   a:>  ");
			if (a = 0 || a > 0)
			{
				scanf("%lf", &a);
				d = sqrt(a);
				printf("�����Ϊ:>  %lf\n", d);
			}
			if (a < 0)
			{
				printf("�������(> - <)\n");
			}
		}break;
		case 7://������7
		{
			printf("���뱻�����ͳ��� a,c   :>");
			scanf("%lf %lf", &a, &c);
			printf("�����Ϊ:>  %d\n", (int)a % (int)c);
		}break;
		case 8://�����8
		{
			printf("Ҫ����Ȼ������ln������ڶ����� c ����2.718��Ҫ�㳣�ö�����lg������ڶ����� c ����10\n");
			printf("���������͵��� a,c   :>  ");
			scanf("%lf %lf", &a, &c);
			if (c == 2.718)
			{
				d = log(a);
				printf("�����Ϊ%lf\n", d);
			}
			else
			{
				if (c == 10)
				{
					d = log10(a);
					printf("�����Ϊ%lf\n", d);
				}
				else
				{
					d = log(a) / log(c);
					printf("�����Ϊ%lf\n", d);
				}
			}
		}break;
		case 9://��η�9
		{
			printf("���μ����Ƿ�ʹ��ϵͳ�����㷨����e��n�η��������д˼��㣬������1������������0��Ŀǰ��֧��������   :>  ");
			scanf("%d", &a1);
			if (a1 == 1)
			{
				printf("���������Ĵη�\n");
				scanf("%lf", &c);
				e = 2;
				f = E;
				while (e <= c)
				{
					f = f * E;
					e++;
				}
				printf("�����Ϊ:>  %lf\n", f);
			}
			if (a1 != 1)
			{
				printf("��������ʹη�a,c:>  ");
				scanf("%lf %lf", &a, &c);
				e = 2;
				f = a;
				while (e <= c)
				{
					f = f * a;
					e++;
				}
				printf("�����Ϊ:>  %lf\n", f);
			}
		}break;
		case 10://�������10
		{
			printf("�����ϵ��� n ���µ��� m ---->  ");
			//a1��n��b1��m
			scanf("%d%d", &a1, &b1);
			count = a1 - b1;
			if (count > 0)
			{
				printf("��⵽�ϵ��� %d ���µ��� %d ���Ƿ������  ---> (y or n) ", a1, b1);
				getchar();
				scanf("%c", &judge);
				if (judge == 'y')
				{
					result = a1;
					a1 = b1;
					b1 = result;
					result = comb(a1, b1);
					printf("���Ľ����:>  %d\n", result);
				}
				else
				{
					printf("��ѡ���˽���\n");
				}
			}
			else
			{
				result = comb(a1, b1);
				printf("���Ľ����:>  %d\n", result);
			}
		}break;
		case 11://��������11
		{
			printf("�����ϵ��� n ���µ��� m ---->  ");
			//a1��n��b1��m
			scanf("%d%d", &a1, &b1);
			count = a1 - b1;
			if (count > 0)
			{
				printf("��⵽�ϵ��� %d ���µ��� %d ���Ƿ������  ---> (y or n) ", a1, b1);
				getchar();
				scanf("%c", &judge);
				if (judge == 'y')
				{
					result = a1;
					a1 = b1;
					b1 = result;
					result = perm(a1, b1);
					printf("���Ľ����:>  %d\n", result);
				}
				else
				{
					printf("��ѡ���˽���\n");
				}
			}
			else
			{
				result = perm(a1, b1);
				printf("���Ľ����:>  %d\n", result);
			}
		}break;
		case 12://�����Ǻ���12
		{
			printf("���뻡���ƽǶ�a   :>  ");
			scanf("%lf", &a);
			d = sin(a);
			e = cos(a);
			f = tan(a);
			printf("����=%lf\t����=%lf\t����=%lf\t\n", d, e, f);
			if (d != 0)
			{
				g = 1 / d;
				printf("���csc=%lf\t", g);
			}
			else
			{
				printf("������cscֵ\n");
			}
			if (e != 0)
			{
				h = 1 / e;
				printf("����sec=%lf\t", h);
			}
			else
			{
				printf("������secֵ\n");
			}
			if (f != 0)
			{
				i = 1 / f;
				printf("����cot=%lf\n", i);
			}
			else
			{
				printf("������cotֵ\n");
			}
		}break;
		case 13://�����ֵ13
		{
			printf("���������ֵ�� a   :>  ");
			scanf("%lf", &a);
			d = fabs((float)a);
			printf("%lf\n", (double)d);
		}break;
		case 14://�����Ǻ���14
		{
			printf("���뻡���ƽǶ� a  :>   ");
			scanf("%lf", &a);
			d = asin(a);
			e = acos(a);
			f = atan(a);
			printf("������arcsin=%lf\t������arccos=%lf\t������arctan=%lf\t\n", d, e, f);
			if (d != 0)
			{
				g = 1 / d;
				printf("�����arccsc=%lf\t", g);
			}
			else
			{
				printf("������arccscֵ\n");
			}
			if (e != 0)
			{
				h = 1 / e;
				printf("������arcsec=%lf\t", h);
			}
			else
			{
				printf("������arcsecֵ\n");
			}
			if (f != 0)
			{
				i = 1 / f;
				printf("������arccot=%lf\n", i);
			}
			else
			{
				printf("������arccotֵ\n");
			}
		}break;
		case 15://ȡ��15
		{
			printf("����������� a   :>  ");
			scanf("%lf", &a);
			d = ceil(a);
			e = floor(a);
			printf("��ȡ��Ϊ%lf\t��ȡ��Ϊ%lf\n", d, e);
		}break;
		case 16://��������˫��16
		{
			printf("���뻡���ƽǶ� a   :>  ");
			scanf("%lf", &a);
			d = sinh(a);
			e = cosh(a);
			f = tanh(a);
			printf("����˫��sh=%lf\t����˫��ch=%lf\t����˫��th=%lf\n", d, e, f);
		}break;
		case 17://�ж�����17
		{
			printf("������ж��� a   :>  ");
			scanf("%lf", &a);
			d = prime(a);
			if (d == 0)
				printf("������Ϊ����\n");
			else
				printf("����������\n");
		}break;
		case 18://�ж�����18
		{
			printf("������ж���  a   :>  ");
			scanf("%lf", &a);
			d = year(a);
			if (d == 0)
				printf("���겻������\n");
			else
			{
				if (d == 1)
					printf("����������\n");
				else
					printf("��������������\n");
			}
		}break;
		case 19://����Բ�ཻ�ҳ�19
		{
			printf("����һ��ֱ�߷���Ax+By+C=0�У�����ֱ�ߵ��������� A  B  C   :>  ");
			scanf("%lf%lf%lf", &d, &e, &f);
			printf("����һ����Բ����x2/a2+y2/b2=1�У�������Բ���������� a^2  b^2   :>  ");
			scanf("%lf%lf", &g, &h);
			if (e == 0)//ֱ��б�ʲ�����
			{
				a = f / d * (-1);
				if (a < (-1) * sqrt(g) || a > sqrt(g))
					printf("�ཻ�ҳ������ڣ���Ϊֱ��%lf x=%lf����Բ���ཻ\n",d,-f);
				else
				{
					if (a == (-1) *sqrt(g) || a == sqrt(g))
						printf("�ཻ�ҳ������ڣ���Ϊֱ��%lf x=%lf����Բ����\n", d, -f);
					else
					{
						//���Ax+C=0��ֱ���ཻ�����Ȼ����������ԳƵĽ��㣬�������������y������Եõ�����
						//�������㣬���־���d = 2 * sqrt(b^2-[C^2 * b^2]/[a^2 * A^2])
						i = h - (f * f * h) / (g * d * d);
						k = sqrt(i);
						l = 2 * k;
						printf("�ཻ�ҳ�Ϊ:>  %lf [2 * sqrt(%lf - (%lf^2 * %lf / %lf * %lf^2))]\n", l, h, f, h, g, d);
					}
				}
			}
			else
			{
				//��ʱֱ��б��һ�����ڣ�����������
				//���õ�һ��һԪ���η��̣�(a^2*A^2/B^2+b^2) x^2 + (2*a^2*A*C/B^2) x + (a^2*C*2/B^2-a^2*b^2) = 0
				//ʹ�������ʽ���м��㦤=b^2-4ac
				//b^2����
				//m = (4*g*g*d*d*f*f)/(e*e*e*e);
				//4ac����
				//n = (4*g*g*d*d*f*f)/(e*e*e*e) - (4*g*g*d*d*h)/(e*e) + (4*g*h*f*f)/(e*e) - (4*g*h*h);
				//b^2-4ac֮����һЩ���ֱ�����
				m= (4 * g * g * d * d * h) / (e * e) - (4 * g * h * f * f) / (e * e) + (4 * g * h * h);
				if (m > 0)
				{
					//ʹ���ҳ���ʽ����l = sqrt(1 + k^2)* sqrt((x1+x2)^2 - 4 * (x1 * x2) )
					//sqrt(1+k^2)����
					a = d / e ;
					c = 1 + a * a;
					i = sqrt(c);
					//sqrt((x1+x2)^2 - 4 * (x1 * x2)����
					j = (2 * d * f * g) / (e * e * h + d * d * g);//x1+x2
					k = (g * f * f - g * h * e * e) / (h * e * e + d * d * g);//x1*x2
					l = j * j - 4 * k;
					m = sqrt(l);
					n = i * m;
					printf("�ཻ�ҳ�Ϊ:>  %lf \n", n);
				}
				else
					printf("�ཻ�ҳ������ڣ���Ϊֱ�ߺ���Բ���л�����\n");
			}
		}break;
		case 20://�������20
		{
			printf("�������������������������м��㡣Բ��0��Բ׶1����2��������3   :>  ");
			scanf("%d", &a1);
			if (a1 == 0)
			{
				printf("�˴μ���Բ��������������뾶�͸�   :>  ");
				scanf("%lf %lf", &f, &g);
				e = PI * f * f * g;
				printf("���Ϊ:>  %lf\n", e);
			}
			if (a1 == 1)
			{
				printf("�˴μ���Բ׶������������뾶�͸�   :>  ");
				scanf("%lf %lf", &f, &g);
				e = PI * f * f * g * 1 / 3;
				printf("���Ϊ:>  %lf\n", e);
			}
			if (a1 == 2)
			{
				printf("�˴μ����������������   :>  ");
				scanf("%lf", &f);
				e = PI * f * f * f * 4 / 3;
				printf("���Ϊ:>  %lf\n", e);
			}
			if (a1 == 3)
			{
				printf("���μ������������������볤���   :>  ");
				scanf("%lf%lf%lf", &a, &c, &d);
				e = a * c * d;
				printf("���Ϊ:>  %lf\n", e);
			}
		}break;
		case 21://�������21
		{
			printf("�����������������������롣Բ��0��Բ׶1����2  :>  ");
			scanf("%lf", &d);
			if (d == 0)
			{
				printf("�˴μ���Բ������������������뾶�͸�   :>  ");
				scanf("%lf %lf", &f, &g);
				e = PI * f * f;
				h = 2 * PI * f * g;
				i = e * 2 + h;
				printf("�µ������Ϊ:>  %lf �������Ϊ:>  %lf���ܱ����Ϊ:>  %lf\n", e, h, i);
			}
			if (d == 1)
			{
				printf("�˴μ���Բ׶����������������뾶��ĸ�߳�    :>  ");
				scanf("%lf %lf", &f, &g);
				e = PI * f * f;
				h = PI * f * g;
				i = e + h;
				printf("�������Ϊ:>  %lf�������Ϊ:>  %lf���ܱ����Ϊ:>  %lf\n", e, h, i);
			}
			if (d == 2)
			{
				printf("�˴μ�����������������   :>  ");
				scanf("%lf", &f);
				e = 4 * PI * f * f;
				printf("���Ϊ:>  %lf\n", e);
			}
		}break;
		case 22://�����Ǽ�λ��22
		{
			printf("�����������a   :>  ");
			scanf("%lf", &a);
			d = Math(a);
			printf("%lf��%.0lfλ��\n", a, d);
		}break;
		case 23://�Ƚ��ĸ����Ĵ�С23
		{
			printf("�����ĸ���Ҫ�жϴ�С������   :>  ");
			scanf("%lf%lf%lf%lf", &a, &c, &d, &e);
			printf("ȷ��Ҫ�жϵ�����Ϊ%lf %lf %lf %lf\n", a, c, d, e);
			printf("�������������1���������������0   :>  ");
			scanf("%lf", &f);
			if (f == 0)
			{
				printf("�����������ĸ�����   :>  ");
				scanf("%lf%lf%lf%lf", &a, &c, &d, &e);
				printf("������ʼ����\n");
				f = a;
				if (f < c)
					f = c;
				if (f < d)
					f = d;
				if (f < e)
					f = e;
				printf("������Ϊ:>  %lf\n", f);
				printf("��С����Ϊ:>  %lf\n", a);
			}
			if (f == 1)
			{
				printf("������ʼ����\n");
				f = a;
				if (f < c)
					f = c;
				if (f < d)
					f = d;
				if (f < e)
					f = e;
				printf("������Ϊ:>  %lf\n", f);
			}
		}break;
		case 24://����ѧ�ֺ�GPA  24
		{
			printf("        ����������GPA,��Ϊ�ɼ����ձ�\n");
			printf("A+ 4.0\tA 4.0\tA- 3.7\tB+ 3.3\tB 3.0\n");
			printf("B- 2.7\tC+ 2.3\tC 2.0\tD+ 1.5\tD 1.0\n");
			printf("��������Ҫ����Ŀ�Ŀ��\a   :>  ");
			scanf("%d", &a1);
			if (a1 == 1)
			{
				printf("���뼨��ɼ���ע�����������Ҫ��Ӧ��Ŀ������������ӻس�������֮��ӿո�:>   ");
				scanf("%lf", &str1[0]);
				printf("�����Ŀѧ�֣�ע�����������Ҫ��Ӧ��Ŀ������������ӻس�������֮��ӿո�:>   ");
				scanf("%lf", &str2[0]);
				a = str1[0];
				printf("%lf\n", a);
			}
			if (a1 != 1)
			{
				c = 0;
				a = 0;
				printf("��ǰ����%d�ſε�GPA(��λС������������)\n", a1);
				printf("����%d�ſεļ���ɼ�   :>  ", a1);
				for (b1 = 0; b1 < a1; b1++)
					scanf("%lf", &str1[b1]);
				printf("����%d�ſε�ѧ��   :>  ", a1);
				for (b1 = 0; b1 < a1; b1++)
					scanf("%lf", &str2[b1]);
				for (b1 = 0; b1 < a1; b1++)
					c += str2[b1];
				for (b1 = 0; b1 < a1; b1++)
					str3[b1] = str1[b1] * str2[b1];
				for (b1 = 0; b1 < a1; b1++)
					a = str3[b1] / c + a;
				printf("�����Ŀ��ѧ��Ϊ:>  %lf\n", c);
				printf("�����Ŀ��GPAΪ:>  %lf\n", a);
			}
		}break;
		case 25://�Ƚ��������Ĵ�С25
		{
			printf("����Ҫ�жϴ�С����������   :>  ");
			scanf("%lf%lf", &a, &c);
			if (a > c)
				printf("%lf��%lf��\n", a, c);
			else
				if (a < c)
					printf("%lf��%lf��\n", c, a);
				else
					printf("%lf = %lf", a, c);
		}break;
		case 26://��������������ܳ�26
		{
			printf("������֪����Ѱ�����еļ��㷽ʽ\n");
			printf("1.ֱ����������֪��ֱ�Ǳ߻������ε׺͸ߣ�����0\n");
			printf("2.��֪���ߣ�����1\n");
			printf("3.��֪��������һ�����Խǣ�����2\n");
			printf("���������   :>  ");
			scanf("%d", &a1);
			if (a1 == 0)
			{
				printf("������߳���׸�\n");
				scanf("%lf%lf", &a, &b);
				c = a * b * 0.5;
				printf("���������Ϊ:>  %lf\n", c);
			}
			if (a1 == 1)
			{
				printf("���������߳�\n");
				scanf("%lf%lf%lf", &a, &b, &c);
				d = (a + b + c) / 2;
				s = d * (d - a) * (d - b) * (d - c);
				s = sqrt(s);
				printf("���������Ϊ:>  %lf\n", s);
			}
			if (a1 == 2)
			{
				printf("����Ƕ�Ϊ30���150�㣬����������1��\n����Ƕ�Ϊ45���135�㣬������2��\n����Ƕ�Ϊ60���120�㣬������3��\n����Ƕ�Ϊ90�㣬������4\n");
				scanf("%lf%lf%lf", &a, &b, &c);
				if (c == 1)
				{
					s = 0.5 * a * b * 0.5;
					printf("���������Ϊ:>  %lf\n", s);
				}
				if (c == 2)
				{
					s = 0.5 * a * b * 0.5;
					printf("���������Ϊ:>  %lf��2\n", s);
				}
				if (c == 3)
				{
					s = 0.5 * a * b * 0.866;
					printf("���������Ϊ:>  %lf * ��3\n", s);
				}
				if (c == 4)
				{
					s = 0.5 * a * b;
					printf("���������Ϊ:>  &lf\n", s);
				}
			}
		}break;
		case 27://������ʽ27
		{
			printf("���μ�������ʽ�������������2��������������3\n");
			printf("���Ҫ�����Ԫһ�η�����Ľ⣬����4��������Ԫһ�β���ʽ�Ľ⣬����5   :>  ");
			scanf("%d", &a1);
			if (a1 == 2)
			{
				printf("���Ҫ����2*2�ͣ����������2���������2*3���ͣ����������3   :>  ");
				scanf("%d", &b1);
				if (b1 == 2)
				{
					printf("���μ�����׶��ж�������ʽ������һ��һ��˳������   :>  ");
					scanf("%lf%lf%lf%lf", &c, &d, &e, &f);
					printf("���μ��������ʽΪ\n");
					printf("          |%lf  %lf|\n ", c, d);
					printf("         |%lf  %lf|\n ", e, f);
					g = c * f - d * e;
					printf("�������:>  %lf\n", g);
				}
				if (b1 == 3)
				{
					printf("���μ�����׶�����������ʽ������һ��һ��˳��   :>  ");
					scanf("%lf%lf%lf%lf%lf%lf", &c, &d, &e, &f, &g, &h);
					printf("���μ��������ʽΪ\n");
					printf("          |%lf  %lf  %lf|\n ", c, d, e);
					printf("         |%lf  %lf  %lf|\n ", f, g, h);
					i = c * g + d * h + e * f - d * f - e * g - c * h;
					printf("���Ľ����:>  %lf\n", i);
				}
			}
			if (a1 == 3)
			{
				printf("���μ�����������ʽ������һ��һ��˳��   :>  ");
				scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf", &str[0][0], &str[0][1], &str[0][2], &str[1][0], &str[1][1], &str[1][2], &str[2][0], &str[2][1], &str[2][2]);
				printf("���μ��������ʽΪ\n");
				printf("          |%lf %lf %lf|\n", str[0][0], str[0][1], str[0][2]);
				printf("          |%lf %lf %lf|\n", str[1][0], str[1][1], str[1][2]);
				printf("          |%lf %lf %lf|\n", str[2][0], str[2][1], str[2][2]);
				c = str[0][0] * str[1][1] * str[2][2] + str[0][1] * str[1][2] * str[2][0] + str[0][2] * str[1][0] * str[2][1];
				d = str[0][2] * str[1][1] * str[2][0] + str[0][1] * str[1][0] * str[2][2] + str[0][0] * str[1][2] * str[2][1];
				e = c - d;
				printf("�����Ϊ:>  %lf\n", e);
			}
			if (a1 == 4)
			{
				printf("���μ����Ԫһ�η�����Ľ⣬һ�������������������\n");
				printf("���磺x+y=2,2x+3y=6�������� 1 1 2    2 3 6��ϵ��һ��Ҫ��Ӧ   :>  ");
				scanf("%lf%lf%lf%lf%lf%lf", &c, &d, &e, &f, &g, &h);
				i = c * g - d * f;
				if (i == 0)
				{
					j = e * g - d * h;
					k = c * h - e * f;
					if (j == 0 && k == 0)
						printf("�˷�����������\n");
					else
						printf("�˷����޽�\n");
					break;
				}
				if (i != 0)
				{
					j = e * g - d * h;
					k = c * h - e * f;
					printf("������Ľ�Ϊ:>  x=%lf\ty=%lf\n", j / i, k / i);
				}
			}
			if (a1 == 5)
			{
				printf("���μ�����Ԫһ�η���ʽ�Ľ⣬���������������������\n");
				printf("���磺x+y=1, x+2y-3z=6, 2x+3y+4z=9��������1 1 0 1    1 2 -3 6    2 3 4 9��ϵ��һ��Ҫ��Ӧ   :>  ");
				for (a1 = 0; a1 < 3; a1++)
					for (b1 = 0; b1 < 4; b1++)
						scanf("%lf", &ste[a1][b1]);
				//D
				b = ste[0][0] * ste[1][1] * ste[2][2] + ste[0][1] * ste[1][2] * ste[2][0] + ste[0][2] * ste[1][0] * ste[2][1];
				c = ste[0][0] * ste[1][2] * ste[2][1] + ste[0][1] * ste[1][0] * ste[2][2] + ste[0][2] * ste[1][1] * ste[2][0];
				d = b - c;
				if (d == 0)
				{
					e = ste[0][3] * ste[1][1] * ste[2][2] + ste[0][1] * ste[1][2] * ste[2][3] + ste[0][2] * ste[1][3] * ste[2][1];
					f = ste[0][3] * ste[1][2] * ste[2][1] + ste[0][1] * ste[1][3] * ste[2][2] + ste[0][2] * ste[1][1] * ste[2][3];
					g = e - f;
					b = ste[0][0] * ste[1][3] * ste[2][2] + ste[0][3] * ste[1][2] * ste[2][0] + ste[0][2] * ste[1][0] * ste[1][3];
					c = ste[0][0] * ste[1][2] * ste[2][3] + ste[0][3] * ste[1][0] * ste[2][2] + ste[0][2] * ste[1][3] * ste[2][0];
					a = b - c;
					h = ste[0][0] * ste[1][1] * ste[2][3] + ste[0][1] * ste[1][3] * ste[2][0] + ste[0][3] * ste[1][0] * ste[2][1];
					i = ste[0][0] * ste[1][3] * ste[2][1] + ste[0][1] * ste[1][0] * ste[2][3] + ste[0][3] * ste[1][1] * ste[2][0];
					j = h - i;
					if (g == 0 && a == 0 && j == 0)
						printf("�˷������޽���ж��\n");
					else
						printf("�˷������޽�\n");
				}
				if (d != 0)
				{
					//D1 --x 
					e = ste[0][3] * ste[1][1] * ste[2][2] + ste[0][1] * ste[1][2] * ste[2][3] + ste[0][2] * ste[1][3] * ste[2][1];
					f = ste[0][3] * ste[1][2] * ste[2][1] + ste[0][1] * ste[1][3] * ste[2][2] + ste[0][2] * ste[1][1] * ste[2][3];
					g = e - f;
					//D2 --y
					b = ste[0][0] * ste[1][3] * ste[2][2] + ste[0][3] * ste[1][2] * ste[2][0] + ste[0][2] * ste[1][0] * ste[2][3];
					c = ste[0][0] * ste[1][2] * ste[2][3] + ste[0][3] * ste[1][0] * ste[2][2] + ste[0][2] * ste[1][3] * ste[2][0];
					a = b - c;
					//D3 --z
					h = ste[0][0] * ste[1][1] * ste[2][3] + ste[0][1] * ste[1][3] * ste[2][0] + ste[0][3] * ste[1][0] * ste[2][1];
					i = ste[0][0] * ste[1][3] * ste[2][1] + ste[0][1] * ste[1][0] * ste[2][3] + ste[0][3] * ste[1][1] * ste[2][0];
					j = h - i;
					printf("������Ľ�Ϊ:>  x=%lf\ty=%lf\tz=%lf\n", g / d, a / d, j / d);
				}
			}
		}break;
		case 28://������Ϣ28
		{
			printf("���뱾��Ԫ�������ʣ�Ĭ��Ϊ%%����ʱ�䣨���ʵ�λ��ʱ�䵥λӦ��ͳһ��  :>  ");
			scanf("%lf%lf%lf", &a, &b, &c);
			d = a * b * c * 0.01;
			printf("�ɻ������Ϊ:>  %lf\n", d);
		}break;
		}
	}while (bili);
}
int main()
{
	int choose;
	color(5);
	manu2();
	begin();
	return 0;
}

	
