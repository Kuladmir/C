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
	printf("                                       本程序为小型计算器[高阶版]\n");
	printf("                                       ★以下为本程序说明和提示\n");
    printf("              提示#1  支持28种计算方式，并有14种颜色可调节，并默认显示小数点后六位有效数字（可改）\n");
	printf("              提示#2  支持π=3.14（可改），e=2.7183（可改），支持对数：自然对数，常用对数，三角函数支持常用六个\n");
	printf("              提示#3  进行计算时请严谨地跟随指导，若数据过大可能出现#INDOO显示，因为系统不一定精准\n");
	printf("              提示#4  进行计算的时候先输入对应的计算代码（下有），之后根据提示进行操作\n");
	printf("              提示#5  例如计算2+5  先输入+，之后输入2 5（两个数之间要加空格），且计算代码均为英文版\n");
	printf("              （9）计算代码#1    加+  减-  乘*  除/  阶乘!  开根#  三角函数<  绝对值=  反三角函数>\n");
	printf("              （5）计算代码#2    取整?  三角双曲,  判断素数;  判断闰年:  判断是几位数_\n");
	printf("              （5）计算代码#3    求余数（输出整数）%% 组合数`  排列数~  指数^  对数@  \n");
	printf("              （4）计算代码#4    判断四个数大小a   计算GPA b  判断两个数大小c  求椭圆相交弦长d\n");
	printf("              （4）计算代码#5    求体积e  求表面积f  求三角形周长和面积g  求二阶和三阶行列式h（可算方程组的解）\n");
	printf("              （1）计算代码#6    计算利率$ \n");
	scanf("%c",&bili);
	switch(bili)
	{
	case'+'://求和1
		{
			printf("请输入要计算几个数的和\n");
			scanf("%d",&a1);
			printf("输入加数\n");
			for(I=0;I<a1;I++)
				scanf("%lf",&S[I]);
			d=0;
		    for(I=0;I<a1;I++)
				d=S[I]+d;
			printf("最后结果为%lf\n",d);
		}break;
	case'-'://求差2
		{
			printf("请输入要计算几个数的差\n");
			scanf("%d",&a1);
			printf("输入被减数和减数，被减数最先\n");
			for(I=0;I<a1;I++)
				scanf("%lf",&S[I]);
			d=S[0];
			for(I=1;I<a1;I++)
				d=d-S[I];
			printf("最后结果为%lf\n",d);
		}break;
	case'*'://求积3
		{
			printf("请输入要计算几个数的积\n");
			scanf("%d",&a1);
			printf("输入乘数\n");
			for(I=0;I<a1;I++)
			scanf("%lf",&S[I]);
			d=1;
			for(I=0;I<a1;I++)
				d=S[I]*d;
			printf("最后结果为%lf\n",d);
		}break;
	case'/'://求商4
		{
			printf("请输入要计算几个数的商\n");
			scanf("%d",&a1);
			printf("输入被除数和除数，被除数优先\n");
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
	case'!'://求阶乘5
		{		
			printf("输入待阶乘数a\n");
			scanf("%lf",&a);
			e=1;
			f=2;
			while(f<=a)
			{
				e=e*f;
				f=f+1;
			}
			printf("最后结果为%lf\n",e);
		}break;
	case'#'://求根号6
		{
			printf("输入待开方数a\n");
			scanf("%lf",&a);
			d=sqrt(a);
			printf("最后结果为%lf\n",d);
		}break;
	case'%'://求余数7
		{
			printf("输入除数和被除数a,c\n");
			scanf("%lf %lf",&a,&c);
			printf("最后结果为%d\n",(int)a%(int)c);
		}break;
	case'@'://求对数8
		{
			printf("输入真数和底数a,c\n");
			printf("要算自然对数（ln），把c输入2.718，要算常用对数（lg），把c输入2.7183\n");
			scanf("%lf %lf",&a,&c);
			if(c==2.718)
			{
			d=log(a);
			printf("最后结果为%lf\n",d);
			}
			else
			{
				if(c==2.7183)
				{
					d=log10(a);
					printf("最后结果为%lf\n",d);
				}
					else
					{
				d=log(a)/log(c);
				printf("最后结果为%lf\n",d);
					}
			}
		}break;
	case'^'://求次方9
		{
			printf("本次计算是否使用系统内置算法：求e的n次方，若进行此计算，再输入1，若不，输入0，目前仅支持整数幂\n");
			scanf("%lf",&d);
			if(d==1)
			{
				printf("请输入计算的次方\n");
				scanf("%lf",&c);
				e=2;
				f=E;
				while(e<=c)
				{
					f=f*E;
					e++;
				}
				printf("最后结果为%lf\n",f);
			}
			if(d!=1)
			{
				printf("输入底数和次方a,c\n");
			scanf("%lf %lf",&a,&c);
			e=2;
			f=a;
			while(e<=c)
			{
				f=f*a;
				e++;
			}	
			printf("最后结果为%lf\n",f);
			}
		}break;
	case'`'://求组合数10
		{
			printf("输入下底数和上底数a,c\n");
			scanf("%lf %lf",&a,&c);
			i=a-c;
			if(i==0)
				printf("最后的结果为1.00\n");
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
			printf("最后结果为%lf\n",d);
			}
			if(i<0 || a==0)
				printf("error\n");
		}break;
	case'~'://求排列数11
		{
			printf("输入下底数和上底数a,c\n");
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
			printf("最后结果为%lf\n",d);
			}
			if(i<0 || a==0)
				printf("error\n");
		}break;
	case'<'://求三角函数12
		{
			printf("输入弧度制角度a\n");
			scanf("%lf",&a);
			d=sin(a);
			e=cos(a);
			f=tan(a);
		printf("正弦=%lf\t余弦=%lf\t正切=%lf\t\n",d,e,f);
		if(d!=0)
		{
			g=1/d;
			printf("余割csc=%lf\t",g);
		}
		if(e!=0)
		{
			h=1/e;
			printf("正割sec=%lf\t",h);
		}
		if(f!=0)
		{
			i=1/f;
			printf("余切cot=%lf\n",i);
		}
		}break;
	case'='://求绝对值13
		{
    	printf("输入待绝对值数a\n");
		scanf("%lf",&a);
		d=fabs((float)a);
		printf("%lf\n",(double)d);
		}break;
	case'>'://求反三角函数14
		{
		printf("输入弧度制角度a\n");
		scanf("%lf",&a);
		d=asin(a);
		e=acos(a);
		f=atan(a);
		printf("反正弦arcsin=%lf\t反余弦arccos=%lf\t反正切arctan=%lf\t\n",d,e,f);
		if(d!=0)
		{
			g=1/d;
			printf("反余割arccsc=%lf\t",g);
		}
		if(e!=0)
		{
			h=1/e;
			printf("反正割arcsec=%lf\t",h);
		}
		if(f!=0)
		{
			i=1/f;
			printf("反余切arccot=%lf\n",i);
		}
		}break;
	case'?'://取整15
		{
			printf("输入待运算数a\n");
			scanf("%lf",&a);
			d=ceil(a);
			e=floor(a);
			printf("上取整为%lf\t下取整为%lf\n",d,e);
		}break;
	case','://计算三角双曲16
		{
			printf("输入弧度制角度a\n");
			scanf("%lf",&a);
			d=sinh(a);
			e=cosh(a);
			f=tanh(a);
			printf("正弦双曲sh=%lf\t余弦双曲ch=%lf\t正切双曲th=%lf\n",d,e,f);
		}break;
	case';'://判断素数17
		{
			printf("输入待判断数a\n");
			scanf("%lf",&a);
			d=prime(a);
			if(d==0)
				printf("该数不为素数\n");
			else
				printf("该数是素数\n");
		}break;
	case':'://判断闰年18
		{
			printf("输入待判断数a\n");
			scanf("%lf",&a);
			d=year(a);
			if(d==0)
				printf("该年不是闰年\n");
			else
			{
				if(d==1)
					printf("该年是闰年\n");
				else
					printf("该年是世纪闰年\n");
			}
		}break;
	case'd'://求椭圆相交弦长19
		{
			printf("输入一般直线方程Ax+By+C=0，标准椭圆方程中的 A B C a b\n");
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
				printf("相交弦长为%lf\n",n);
				}
				else
				printf("None\n");
			}
		}break;
	case'e'://计算体积20
		{
			printf("求体积额外输入代码 圆柱0，圆锥1，球2，立方体3\n");
			scanf("%lf",&d);
			if(d==0)
			{
				printf("此次计算圆柱体积，输入底面半径和高\n");
				scanf("%lf %lf",&f,&g);
				e=PI*f*f*g;
				printf("体积%lf\n",e);
			}
			if(d==1)
			{
				printf("此次计算圆锥体积，输入底面半径和高\n");
				scanf("%lf %lf",&f,&g);
				e=PI*f*f*g*1/3;
				printf("体积%lf\n",e);
			}
			if(d==2)
			{
				printf("此次计算球体积，输入球径\n");
				scanf("%lf",&f);
				e=PI*f*f*f*4/3;
				printf("体积%lf\n",e);
			}
			if(d==3)
			{
			printf("本次计算立方体的体积，输入长宽高\n");
			scanf("%lf%lf%lf",&a,&c,&d);
			e=a*c*d;
			printf("%lf\n",e);
			}
		}break;
	case'f'://计算面积21
		{
            printf("求表面积额外输入代码 圆柱0，圆锥1，球2\n");
			scanf("%lf",&d);
			if(d==0)
			{
				printf("此次计算圆柱各面面积，输入底面半径和高\n");
				scanf("%lf %lf",&f,&g);
				e=PI*f*f;
				h=2*PI*f*g;
				i=e*2+h;
				printf("下底面面积%lf，侧面积%lf，总表面积%lf\n",e,h,i);
			}
			if(d==1)
			{
				printf("此次计算圆锥各面面积，输入底面半径和母线长\n");
				scanf("%lf %lf",&f,&g);
				e=PI*f*f;
				h=PI*f*g;
				i=e+h;
				printf("底面面积%lf，侧面积%lf，总表面积%lf\n",e,h,i);
			}
			if(d==2)
			{
				printf("此次计算球表面积，输入球径\n");
				scanf("%lf",&f);
				e=4*PI*f*f;
				printf("体积%lf\n",e);
			}
		}break;
	case'_'://计算是几位数22
		{
		printf("输入待运算数a\n");
		scanf("%lf",&a);
		d=Math(a);
		printf("%lf是%.0lf位数\n",a,d);
		}break;
	case'a'://比较四个数的大小23
		{
			printf("输入四个需要判断大小的数字\n");
			scanf("%lf%lf%lf%lf",&a,&c,&d,&e);
			printf("确定要判断的数字为%lf %lf %lf %lf\n",a,c,d,e);
			printf("如果无误，请输入1，如果有误，请输入0\n");
			scanf("%lf",&f);
			if(f==0)
			{
				printf("请重新输入四个数字\n");
				scanf("%lf%lf%lf%lf",&a,&c,&d,&e);
				printf("即将开始计算\n");
				f=a;
				if(f<c)
					f=c;
				if(f<d)
					f=d;
				if(f<e)
					f=e;
				printf("最大的数为%lf\n",f);
				printf("最小的数为%lf\n",a);
			}
			if(f==1)
			{
				printf("即将开始计算\n");
				f=a;
				if(f<c)
					f=c;
				if(f<d)
					f=d;
				if(f<e)
					f=e;
				printf("最大的数为%lf\n",f);
			}
		}break;
    case'b'://计算学分和GPA  24
		{
	printf("        可用来计算GPA,下为成绩对照表\n");
	printf("A+ 4.0\tA 4.0\tA- 3.7\tB+ 3.3\tB 3.0\n");
	printf("B- 2.7\tC+ 2.3\tC 2.0\tD+ 1.5\tD 1.0\n");
	printf("首先输入要计算的科目数\a\n");
	scanf("%d",&a1);
if(a1==1)
	{
		printf("输入绩点成绩，再输入对应学分（注意输入的数量要对应科目数，绩点输完加回车，数字之间加空格）\n");
		scanf("%lf",&str1[0]);
		scanf("%lf",&str2[0]);
		a=str1[0];
		printf("%lf\n",a);
	}
	if(a1!=1)
	{
		c=0;
		a=0;
		printf("输入对应数量的绩点成绩，回车下一行输入学分\n");
		printf("当前计算%d门课的GPA(六位小数，四舍五入)\n",a1);
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
		printf("输入科目总学分为 %lf\n",c);
		printf("输入科目总GPA为  %lf\n",a);
	}
		}break;
	case'c'://比较两个数的大小25
		{
			printf("输入要判断大小的两个数字\n");
			scanf("%lf%lf",&a,&c);
			if(a>c)
				printf("%lf比%lf大\n",a,c);
			else
				if(a<c)
					printf("%lf比%lf大\n",c,a);
				else
					printf("%lf = %lf",a,c);
		}break;
	case'g'://求三角形面积周长26
		{
	printf("根据已知条件寻找下列的计算方式\n");
	printf("1.直角三角形已知两直角边或三角形底和高，输入0\n");
	printf("2.已知三边，输入1\n");
	printf("3.已知两边与另一边所对角，输入2\n");
	scanf("%lf",&n);
	if(n==0)
		{
		    printf("请输入边长或底高\n");
	        scanf("%lf%lf",&a,&b);
	        c=a*b*0.5;
	        printf("Answer is %lf\n",c);
		}
	if(n==1)
		{
		    printf("请输入三边长\n");
			scanf("%lf%lf%lf",&a,&b,&c);
			d=(a+b+c)/2;
			s=d*(d-a)*(d-b)*(d-c);
			s=sqrt(s);
			printf("Answer is %lf\n",s);
		}
	if(n==2)
		{
			printf("如果角度为30°或150°，第三个输入1；\n如果角度为45°或135°，则输入2；\n如果角度为60°或120°，则输入3；\n如果角度为90°，则输入4\n");
			scanf("%lf%lf%lf",&a,&b,&c);
			if(c==1)
			{
				s=0.5*a*b*0.5;
				printf("Answer is %lf\n",s);
			}
            if(c==2)
			{
				s=0.5*a*b*0.5;
				printf("Answer is %lf√2\n",s);
			}
			if(c==3)
			{
				s=0.5*a*b*0.866;
				printf("Answer is %lf√3\n",s);
			}
			if(c==4)
			{
				s=0.5*a*b;
				printf("Answer is &lf\n",s);
			}
		}
		}break;
	case'h'://求行列式27
		{				
			printf("本次计算行列式，计算二阶输入2，计算三阶输入3\n");
			printf("如果要计算二元一次方程组的解，输入4,计算三元一次不等式的解，输入5\n");
			scanf("%lf",&a);
			if(a==2)
			{
				printf("如果要计算2*3类型，请额外输入3，如果计算2*2类型，请额外输入2\n");
				scanf("%lf",&m);
				if(m==2)
				{
				printf("本次计算二阶二行二列行列式，按照一行一行顺序,输入完一行要回车\n");
				scanf("%lf%lf%lf%lf",&c,&d,&e,&f);
				printf("本次计算的行列式为\n");
				printf("          |%lf  %lf|\n ",c,d);
				printf("         |%lf  %lf|\n ",e,f);
				g=c*f-d*e;
                printf("最后的结果是：%lf\n",g);
				}
				if(m==3)
				{
				printf("本次计算二阶二行三列行列式，按照一行一行顺序,输入完一行要回车\n");
				scanf("%lf%lf%lf%lf%lf%lf",&c,&d,&e,&f,&g,&h);
				printf("本次计算的行列式为\n");
				printf("          |%lf  %lf  %lf|\n ",c,d,e);
				printf("         |%lf  %lf  %lf|\n ",f,g,h);
				i=c*g+d*h+e*f-d*f-e*g-c*h;
                printf("最后的结果是：%lf\n",i);
				}

			}
			if(a==3)
			{
				printf("本次计算三阶行列式，按照一行一行顺序，输入完一行要回车\n");
				scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf",&str[0][0],&str[0][1],&str[0][2],&str[1][0],&str[1][1],&str[1][2],&str[2][0],&str[2][1],&str[2][2]);
				printf("本次计算的行列式为\n");
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
				printf("本次计算二元一次方程组的解，一次输入两个方程里的数\n");
				printf("例如：x+y=2,2x+3y=6，就输入 1 1 2 2 3 6，系数一定要对应\n");
				scanf("%lf%lf%lf%lf%lf%lf",&c,&d,&e,&f,&g,&h);
				i=c*g-d*f;
				if(i==0)
				{
					j=e*g-d*h;
					k=c*h-e*f;
					if(j==0 && k==0)
					printf("此方程有无穷多解\n");
					else
					printf("此方程无解\n");
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
				printf("本次计算三元一次方程式的解，依次输入三个方程里的数\n");
				printf("例如：x+y+z=1,x+2y+3z=6,2x+3y+4z=9，就输入1 1 1 1 1 2 3 6 2 3 4 9，系数一定要对应\n");
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
						printf("此方程组无解或有多解\n");
					else
						printf("此方程组无解\n");
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
	case'$'://计算利息28
		{
			printf("输入本金（元），利率（默认为%%），时间（利率单位和时间单位应该统一）\n");
			scanf("%lf%lf%lf",&a,&b,&c);
			d=a*b*c*0.01;
			printf("可获得利润为:%lf\n",d);
		}break;
	}
 return 0;
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








