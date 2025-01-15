#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<conio.h>
#define PI 3.14
#define E 2.7183
void color(short x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);//此处可修改字体颜色 1~14
}

double prime(double x)//函数1：判断是否为素数
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

double year(double x)//函数2：判断是否为闰年
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

double Math(double x)//函数3：判断是几位数
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

int factorial(int x)//函数4：计算阶乘
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

int comb(int x, int y)//函数4：计算组合数
{
	//x是上底数，y是下底数
	int result;
	result = factorial(y) / (factorial(x) * factorial(y - x));
	return result;
}

int perm(int x, int y)//函数5：计算排列数
{
	int result;
	result = factorial(y) / factorial(y - x);
	return result;
}

void manu2()
{
		printf("                                       ★ 以下为本计算器程序说明和提示\n");
    printf("              提示#1  支持28种计算方式，并有14种颜色可调节，并默认显示小数点后六位有效数字（可改）\n");
	printf("              提示#2  支持π=3.14（可改），e=2.7183（可改），支持对数：自然对数，常用对数，三角函数支持常用六个\n");
	printf("              提示#3  进行计算时请严谨地跟随指导，若数据过大可能出现#INDOO显示，因为系统不一定精准\n");
	printf("              提示#4  进行计算的时候先输入对应的计算代码（下有），之后根据提示进行操作\n");
	printf("              提示#5  例如计算2+5  先输入+，之后输入2 5（两个数之间要加空格），且计算代码均为英文版\n");
	printf("              （9）计算代码#1    加1  减2  乘3  除4  阶乘5  开根6  求余数（输出整数）7  对数8  指数9    \n");
	printf("              （5）计算代码#2    组合数10  排列数11  三角函数12  绝对值13  反三角函数14  取整15\n");
	printf("              （5）计算代码#3    三角双曲16  判断素数17  判断闰年18  求椭圆相交弦长19  求体积20\n");
	printf("              （4）计算代码#4    求表面积21  判断是几位数22  判断四个数大小23   计算GPA 24  \n");
	printf("              （4）计算代码#5    判断两个数大小25   求三角形周长和面积26  求二阶和三阶行列式27（可算方程组的解）\n");
	printf("              （1）计算代码#6    计算利率28 \n");
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
		printf("--------------------分割线--------------------\n");
		printf("现在开始进行计算，请输入算法代码   :>  ");
		scanf("%d", &bili);
		switch (bili)
		{
		case 1://求和1
		{
			printf("请输入要计算几个数的和   :>  ");
			scanf("%d", &a1);
			printf("请输入%d个加数   :>  ", a1);
			for (I = 0; I < a1; I++)
				scanf("%lf", &S[I]);
			d = 0;
			for (I = 0; I < a1; I++)
				d = S[I] + d;
			printf("最后结果为:>  %lf\n", d);
		}break;
		case 2://求差2
		{
			printf("请输入要计算几个数的差   :>  ");
			scanf("%d", &a1);
			printf("输入被减数和%d减数，被减数最先   :>  ", a1 - 1);
			for (I = 0; I < a1; I++)
				scanf("%lf", &S[I]);
			d = S[0];
			for (I = 1; I < a1; I++)
				d = d - S[I];
			printf("最后结果为:>  %lf\n", d);
		}break;
		case 3://求积3
		{
			printf("请输入要计算几个数的积   :>  ");
			scanf("%d", &a1);
			printf("输入%d个乘数   :>  ", a1);
			for (I = 0; I < a1; I++)
				scanf("%lf", &S[I]);
			d = 1;
			for (I = 0; I < a1; I++)
				d = S[I] * d;
			printf("最后结果为:>  %lf\n", d);
		}break;
		case 4://求商4
		{
			printf("请输入要计算几个数的商   :>  ");
			scanf("%d", &a1);
			printf("输入被除数和%d个除数，被除数优先   :>  ", a1 - 1);
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
				printf("最后结果为:>  %lf\n", d);
			}
		}break;
		case 5://求阶乘5
		{
			printf("输入待阶乘数   a:>  ");
			scanf("%d", &a1);
			result = factorial(a1);
			printf("最后结果为:>  %d\n", result);
		}break;
		case 6://求根号6
		{
			printf("输入待开方数   a:>  ");
			if (a = 0 || a > 0)
			{
				scanf("%lf", &a);
				d = sqrt(a);
				printf("最后结果为:>  %lf\n", d);
			}
			if (a < 0)
			{
				printf("输入错误(> - <)\n");
			}
		}break;
		case 7://求余数7
		{
			printf("输入被除数和除数 a,c   :>");
			scanf("%lf %lf", &a, &c);
			printf("最后结果为:>  %d\n", (int)a % (int)c);
		}break;
		case 8://求对数8
		{
			printf("要算自然对数（ln），则第二个数 c 输入2.718，要算常用对数（lg），则第二个数 c 输入10\n");
			printf("输入真数和底数 a,c   :>  ");
			scanf("%lf %lf", &a, &c);
			if (c == 2.718)
			{
				d = log(a);
				printf("最后结果为%lf\n", d);
			}
			else
			{
				if (c == 10)
				{
					d = log10(a);
					printf("最后结果为%lf\n", d);
				}
				else
				{
					d = log(a) / log(c);
					printf("最后结果为%lf\n", d);
				}
			}
		}break;
		case 9://求次方9
		{
			printf("本次计算是否使用系统内置算法：求e的n次方。若进行此计算，再输入1；若不则输入0，目前仅支持整数幂   :>  ");
			scanf("%d", &a1);
			if (a1 == 1)
			{
				printf("请输入计算的次方\n");
				scanf("%lf", &c);
				e = 2;
				f = E;
				while (e <= c)
				{
					f = f * E;
					e++;
				}
				printf("最后结果为:>  %lf\n", f);
			}
			if (a1 != 1)
			{
				printf("输入底数和次方a,c:>  ");
				scanf("%lf %lf", &a, &c);
				e = 2;
				f = a;
				while (e <= c)
				{
					f = f * a;
					e++;
				}
				printf("最后结果为:>  %lf\n", f);
			}
		}break;
		case 10://求组合数10
		{
			printf("输入上底数 n 和下底数 m ---->  ");
			//a1是n，b1是m
			scanf("%d%d", &a1, &b1);
			count = a1 - b1;
			if (count > 0)
			{
				printf("检测到上底数 %d 比下底数 %d 大，是否调换？  ---> (y or n) ", a1, b1);
				getchar();
				scanf("%c", &judge);
				if (judge == 'y')
				{
					result = a1;
					a1 = b1;
					b1 = result;
					result = comb(a1, b1);
					printf("最后的结果是:>  %d\n", result);
				}
				else
				{
					printf("你选择了结束\n");
				}
			}
			else
			{
				result = comb(a1, b1);
				printf("最后的结果是:>  %d\n", result);
			}
		}break;
		case 11://求排列数11
		{
			printf("输入上底数 n 和下底数 m ---->  ");
			//a1是n，b1是m
			scanf("%d%d", &a1, &b1);
			count = a1 - b1;
			if (count > 0)
			{
				printf("检测到上底数 %d 比下底数 %d 大，是否调换？  ---> (y or n) ", a1, b1);
				getchar();
				scanf("%c", &judge);
				if (judge == 'y')
				{
					result = a1;
					a1 = b1;
					b1 = result;
					result = perm(a1, b1);
					printf("最后的结果是:>  %d\n", result);
				}
				else
				{
					printf("你选择了结束\n");
				}
			}
			else
			{
				result = perm(a1, b1);
				printf("最后的结果是:>  %d\n", result);
			}
		}break;
		case 12://求三角函数12
		{
			printf("输入弧度制角度a   :>  ");
			scanf("%lf", &a);
			d = sin(a);
			e = cos(a);
			f = tan(a);
			printf("正弦=%lf\t余弦=%lf\t正切=%lf\t\n", d, e, f);
			if (d != 0)
			{
				g = 1 / d;
				printf("余割csc=%lf\t", g);
			}
			else
			{
				printf("不存在csc值\n");
			}
			if (e != 0)
			{
				h = 1 / e;
				printf("正割sec=%lf\t", h);
			}
			else
			{
				printf("不存在sec值\n");
			}
			if (f != 0)
			{
				i = 1 / f;
				printf("余切cot=%lf\n", i);
			}
			else
			{
				printf("不存在cot值\n");
			}
		}break;
		case 13://求绝对值13
		{
			printf("输入待绝对值数 a   :>  ");
			scanf("%lf", &a);
			d = fabs((float)a);
			printf("%lf\n", (double)d);
		}break;
		case 14://求反三角函数14
		{
			printf("输入弧度制角度 a  :>   ");
			scanf("%lf", &a);
			d = asin(a);
			e = acos(a);
			f = atan(a);
			printf("反正弦arcsin=%lf\t反余弦arccos=%lf\t反正切arctan=%lf\t\n", d, e, f);
			if (d != 0)
			{
				g = 1 / d;
				printf("反余割arccsc=%lf\t", g);
			}
			else
			{
				printf("不存在arccsc值\n");
			}
			if (e != 0)
			{
				h = 1 / e;
				printf("反正割arcsec=%lf\t", h);
			}
			else
			{
				printf("不存在arcsec值\n");
			}
			if (f != 0)
			{
				i = 1 / f;
				printf("反余切arccot=%lf\n", i);
			}
			else
			{
				printf("不存在arccot值\n");
			}
		}break;
		case 15://取整15
		{
			printf("输入待运算数 a   :>  ");
			scanf("%lf", &a);
			d = ceil(a);
			e = floor(a);
			printf("上取整为%lf\t下取整为%lf\n", d, e);
		}break;
		case 16://计算三角双曲16
		{
			printf("输入弧度制角度 a   :>  ");
			scanf("%lf", &a);
			d = sinh(a);
			e = cosh(a);
			f = tanh(a);
			printf("正弦双曲sh=%lf\t余弦双曲ch=%lf\t正切双曲th=%lf\n", d, e, f);
		}break;
		case 17://判断素数17
		{
			printf("输入待判断数 a   :>  ");
			scanf("%lf", &a);
			d = prime(a);
			if (d == 0)
				printf("该数不为素数\n");
			else
				printf("该数是素数\n");
		}break;
		case 18://判断闰年18
		{
			printf("输入待判断数  a   :>  ");
			scanf("%lf", &a);
			d = year(a);
			if (d == 0)
				printf("该年不是闰年\n");
			else
			{
				if (d == 1)
					printf("该年是闰年\n");
				else
					printf("该年是世纪闰年\n");
			}
		}break;
		case 19://求椭圆相交弦长19
		{
			printf("输入一般直线方程Ax+By+C=0中，定义直线的三个参数 A  B  C   :>  ");
			scanf("%lf%lf%lf", &d, &e, &f);
			printf("输入一般椭圆方程x2/a2+y2/b2=1中，定义椭圆的两个参数 a^2  b^2   :>  ");
			scanf("%lf%lf", &g, &h);
			if (e == 0)//直线斜率不存在
			{
				a = f / d * (-1);
				if (a < (-1) * sqrt(g) || a > sqrt(g))
					printf("相交弦长不存在，因为直线%lf x=%lf与椭圆不相交\n",d,-f);
				else
				{
					if (a == (-1) *sqrt(g) || a == sqrt(g))
						printf("相交弦长不存在，因为直线%lf x=%lf与椭圆相切\n", d, -f);
					else
					{
						//如果Ax+C=0和直线相交，则必然会产生两个对称的交点，根据两个交点的y坐标可以得到距离
						//根据推算，发现距离d = 2 * sqrt(b^2-[C^2 * b^2]/[a^2 * A^2])
						i = h - (f * f * h) / (g * d * d);
						k = sqrt(i);
						l = 2 * k;
						printf("相交弦长为:>  %lf [2 * sqrt(%lf - (%lf^2 * %lf / %lf * %lf^2))]\n", l, h, f, h, g, d);
					}
				}
			}
			else
			{
				//此时直线斜率一定存在，联立方程组
				//最后得到一个一元二次方程：(a^2*A^2/B^2+b^2) x^2 + (2*a^2*A*C/B^2) x + (a^2*C*2/B^2-a^2*b^2) = 0
				//使用求根公式进行计算Δ=b^2-4ac
				//b^2部分
				//m = (4*g*g*d*d*f*f)/(e*e*e*e);
				//4ac部分
				//n = (4*g*g*d*d*f*f)/(e*e*e*e) - (4*g*g*d*d*h)/(e*e) + (4*g*h*f*f)/(e*e) - (4*g*h*h);
				//b^2-4ac之后，有一些部分被抵消
				m= (4 * g * g * d * d * h) / (e * e) - (4 * g * h * f * f) / (e * e) + (4 * g * h * h);
				if (m > 0)
				{
					//使用弦长公式计算l = sqrt(1 + k^2)* sqrt((x1+x2)^2 - 4 * (x1 * x2) )
					//sqrt(1+k^2)部分
					a = d / e ;
					c = 1 + a * a;
					i = sqrt(c);
					//sqrt((x1+x2)^2 - 4 * (x1 * x2)部分
					j = (2 * d * f * g) / (e * e * h + d * d * g);//x1+x2
					k = (g * f * f - g * h * e * e) / (h * e * e + d * d * g);//x1*x2
					l = j * j - 4 * k;
					m = sqrt(l);
					n = i * m;
					printf("相交弦长为:>  %lf \n", n);
				}
				else
					printf("相交弦长不存在，因为直线和椭圆相切或相离\n");
			}
		}break;
		case 20://计算体积20
		{
			printf("求体积，请根据需求输入代码进行计算。圆柱0，圆锥1，球2，立方体3   :>  ");
			scanf("%d", &a1);
			if (a1 == 0)
			{
				printf("此次计算圆柱体积，输入底面半径和高   :>  ");
				scanf("%lf %lf", &f, &g);
				e = PI * f * f * g;
				printf("体积为:>  %lf\n", e);
			}
			if (a1 == 1)
			{
				printf("此次计算圆锥体积，输入底面半径和高   :>  ");
				scanf("%lf %lf", &f, &g);
				e = PI * f * f * g * 1 / 3;
				printf("体积为:>  %lf\n", e);
			}
			if (a1 == 2)
			{
				printf("此次计算球体积，输入球径   :>  ");
				scanf("%lf", &f);
				e = PI * f * f * f * 4 / 3;
				printf("体积为:>  %lf\n", e);
			}
			if (a1 == 3)
			{
				printf("本次计算立方体的体积，输入长宽高   :>  ");
				scanf("%lf%lf%lf", &a, &c, &d);
				e = a * c * d;
				printf("体积为:>  %lf\n", e);
			}
		}break;
		case 21://计算面积21
		{
			printf("求表面积，请根据需求输入代码。圆柱0，圆锥1，球2  :>  ");
			scanf("%lf", &d);
			if (d == 0)
			{
				printf("此次计算圆柱各面面积，输入底面半径和高   :>  ");
				scanf("%lf %lf", &f, &g);
				e = PI * f * f;
				h = 2 * PI * f * g;
				i = e * 2 + h;
				printf("下底面面积为:>  %lf ，侧面积为:>  %lf，总表面积为:>  %lf\n", e, h, i);
			}
			if (d == 1)
			{
				printf("此次计算圆锥各面面积，输入底面半径和母线长    :>  ");
				scanf("%lf %lf", &f, &g);
				e = PI * f * f;
				h = PI * f * g;
				i = e + h;
				printf("底面面积为:>  %lf，侧面积为:>  %lf，总表面积为:>  %lf\n", e, h, i);
			}
			if (d == 2)
			{
				printf("此次计算球表面积，输入球径   :>  ");
				scanf("%lf", &f);
				e = 4 * PI * f * f;
				printf("体积为:>  %lf\n", e);
			}
		}break;
		case 22://计算是几位数22
		{
			printf("输入待运算数a   :>  ");
			scanf("%lf", &a);
			d = Math(a);
			printf("%lf是%.0lf位数\n", a, d);
		}break;
		case 23://比较四个数的大小23
		{
			printf("输入四个需要判断大小的数字   :>  ");
			scanf("%lf%lf%lf%lf", &a, &c, &d, &e);
			printf("确定要判断的数字为%lf %lf %lf %lf\n", a, c, d, e);
			printf("如果无误，请输入1，如果有误，请输入0   :>  ");
			scanf("%lf", &f);
			if (f == 0)
			{
				printf("请重新输入四个数字   :>  ");
				scanf("%lf%lf%lf%lf", &a, &c, &d, &e);
				printf("即将开始计算\n");
				f = a;
				if (f < c)
					f = c;
				if (f < d)
					f = d;
				if (f < e)
					f = e;
				printf("最大的数为:>  %lf\n", f);
				printf("最小的数为:>  %lf\n", a);
			}
			if (f == 1)
			{
				printf("即将开始计算\n");
				f = a;
				if (f < c)
					f = c;
				if (f < d)
					f = d;
				if (f < e)
					f = e;
				printf("最大的数为:>  %lf\n", f);
			}
		}break;
		case 24://计算学分和GPA  24
		{
			printf("        可用来计算GPA,下为成绩对照表\n");
			printf("A+ 4.0\tA 4.0\tA- 3.7\tB+ 3.3\tB 3.0\n");
			printf("B- 2.7\tC+ 2.3\tC 2.0\tD+ 1.5\tD 1.0\n");
			printf("首先输入要计算的科目数\a   :>  ");
			scanf("%d", &a1);
			if (a1 == 1)
			{
				printf("输入绩点成绩（注意输入的数量要对应科目数，绩点输完加回车，数字之间加空格）:>   ");
				scanf("%lf", &str1[0]);
				printf("输入科目学分（注意输入的数量要对应科目数，绩点输完加回车，数字之间加空格）:>   ");
				scanf("%lf", &str2[0]);
				a = str1[0];
				printf("%lf\n", a);
			}
			if (a1 != 1)
			{
				c = 0;
				a = 0;
				printf("当前计算%d门课的GPA(六位小数，四舍五入)\n", a1);
				printf("输入%d门课的绩点成绩   :>  ", a1);
				for (b1 = 0; b1 < a1; b1++)
					scanf("%lf", &str1[b1]);
				printf("输入%d门课的学分   :>  ", a1);
				for (b1 = 0; b1 < a1; b1++)
					scanf("%lf", &str2[b1]);
				for (b1 = 0; b1 < a1; b1++)
					c += str2[b1];
				for (b1 = 0; b1 < a1; b1++)
					str3[b1] = str1[b1] * str2[b1];
				for (b1 = 0; b1 < a1; b1++)
					a = str3[b1] / c + a;
				printf("输入科目总学分为:>  %lf\n", c);
				printf("输入科目总GPA为:>  %lf\n", a);
			}
		}break;
		case 25://比较两个数的大小25
		{
			printf("输入要判断大小的两个数字   :>  ");
			scanf("%lf%lf", &a, &c);
			if (a > c)
				printf("%lf比%lf大\n", a, c);
			else
				if (a < c)
					printf("%lf比%lf大\n", c, a);
				else
					printf("%lf = %lf", a, c);
		}break;
		case 26://求三角形面积和周长26
		{
			printf("根据已知条件寻找下列的计算方式\n");
			printf("1.直角三角形已知两直角边或三角形底和高，输入0\n");
			printf("2.已知三边，输入1\n");
			printf("3.已知两边与另一边所对角，输入2\n");
			printf("请输入参数   :>  ");
			scanf("%d", &a1);
			if (a1 == 0)
			{
				printf("请输入边长或底高\n");
				scanf("%lf%lf", &a, &b);
				c = a * b * 0.5;
				printf("三角形面积为:>  %lf\n", c);
			}
			if (a1 == 1)
			{
				printf("请输入三边长\n");
				scanf("%lf%lf%lf", &a, &b, &c);
				d = (a + b + c) / 2;
				s = d * (d - a) * (d - b) * (d - c);
				s = sqrt(s);
				printf("三角形面积为:>  %lf\n", s);
			}
			if (a1 == 2)
			{
				printf("如果角度为30°或150°，第三个输入1；\n如果角度为45°或135°，则输入2；\n如果角度为60°或120°，则输入3；\n如果角度为90°，则输入4\n");
				scanf("%lf%lf%lf", &a, &b, &c);
				if (c == 1)
				{
					s = 0.5 * a * b * 0.5;
					printf("三角形面积为:>  %lf\n", s);
				}
				if (c == 2)
				{
					s = 0.5 * a * b * 0.5;
					printf("三角形面积为:>  %lf√2\n", s);
				}
				if (c == 3)
				{
					s = 0.5 * a * b * 0.866;
					printf("三角形面积为:>  %lf * √3\n", s);
				}
				if (c == 4)
				{
					s = 0.5 * a * b;
					printf("三角形面积为:>  &lf\n", s);
				}
			}
		}break;
		case 27://求行列式27
		{
			printf("本次计算行列式，计算二阶输入2，计算三阶输入3\n");
			printf("如果要计算二元一次方程组的解，输入4，计算三元一次不等式的解，输入5   :>  ");
			scanf("%d", &a1);
			if (a1 == 2)
			{
				printf("如果要计算2*2型，请额外输入2，如果计算2*3类型，请额外输入3   :>  ");
				scanf("%d", &b1);
				if (b1 == 2)
				{
					printf("本次计算二阶二行二列行列式，按照一行一行顺序输入   :>  ");
					scanf("%lf%lf%lf%lf", &c, &d, &e, &f);
					printf("本次计算的行列式为\n");
					printf("          |%lf  %lf|\n ", c, d);
					printf("         |%lf  %lf|\n ", e, f);
					g = c * f - d * e;
					printf("最后结果是:>  %lf\n", g);
				}
				if (b1 == 3)
				{
					printf("本次计算二阶二行三列行列式，按照一行一行顺序   :>  ");
					scanf("%lf%lf%lf%lf%lf%lf", &c, &d, &e, &f, &g, &h);
					printf("本次计算的行列式为\n");
					printf("          |%lf  %lf  %lf|\n ", c, d, e);
					printf("         |%lf  %lf  %lf|\n ", f, g, h);
					i = c * g + d * h + e * f - d * f - e * g - c * h;
					printf("最后的结果是:>  %lf\n", i);
				}
			}
			if (a1 == 3)
			{
				printf("本次计算三阶行列式，按照一行一行顺序   :>  ");
				scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf", &str[0][0], &str[0][1], &str[0][2], &str[1][0], &str[1][1], &str[1][2], &str[2][0], &str[2][1], &str[2][2]);
				printf("本次计算的行列式为\n");
				printf("          |%lf %lf %lf|\n", str[0][0], str[0][1], str[0][2]);
				printf("          |%lf %lf %lf|\n", str[1][0], str[1][1], str[1][2]);
				printf("          |%lf %lf %lf|\n", str[2][0], str[2][1], str[2][2]);
				c = str[0][0] * str[1][1] * str[2][2] + str[0][1] * str[1][2] * str[2][0] + str[0][2] * str[1][0] * str[2][1];
				d = str[0][2] * str[1][1] * str[2][0] + str[0][1] * str[1][0] * str[2][2] + str[0][0] * str[1][2] * str[2][1];
				e = c - d;
				printf("最后结果为:>  %lf\n", e);
			}
			if (a1 == 4)
			{
				printf("本次计算二元一次方程组的解，一次输入两个方程里的数\n");
				printf("例如：x+y=2,2x+3y=6，就输入 1 1 2    2 3 6，系数一定要对应   :>  ");
				scanf("%lf%lf%lf%lf%lf%lf", &c, &d, &e, &f, &g, &h);
				i = c * g - d * f;
				if (i == 0)
				{
					j = e * g - d * h;
					k = c * h - e * f;
					if (j == 0 && k == 0)
						printf("此方程有无穷多解\n");
					else
						printf("此方程无解\n");
					break;
				}
				if (i != 0)
				{
					j = e * g - d * h;
					k = c * h - e * f;
					printf("方程组的解为:>  x=%lf\ty=%lf\n", j / i, k / i);
				}
			}
			if (a1 == 5)
			{
				printf("本次计算三元一次方程式的解，依次输入三个方程里的数\n");
				printf("例如：x+y=1, x+2y-3z=6, 2x+3y+4z=9，就输入1 1 0 1    1 2 -3 6    2 3 4 9，系数一定要对应   :>  ");
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
						printf("此方程组无解或有多解\n");
					else
						printf("此方程组无解\n");
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
					printf("方程组的解为:>  x=%lf\ty=%lf\tz=%lf\n", g / d, a / d, j / d);
				}
			}
		}break;
		case 28://计算利息28
		{
			printf("输入本金（元），利率（默认为%%），时间（利率单位和时间单位应该统一）  :>  ");
			scanf("%lf%lf%lf", &a, &b, &c);
			d = a * b * c * 0.01;
			printf("可获得利润为:>  %lf\n", d);
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

	
