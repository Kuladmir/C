#include  <stdio.h>
//根据所给的年月日，判断这天是这年的第几天
int  isleap(int  year)
{ int  leap;
  leap= (year%4==0 && year%100!=0 || year%400==0);
/**********found**********/
  return  leap;
}
int fun(int  year, int  month, int  day)
{  int  table[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   int  days=0 , i;
   for(i=1; i<month; i++)
      days=days + table[i];
/**********found**********/
   days=days+day;
   if( isleap(year) && month>2 )
 /**********found**********/
     days=days+1;
   return  days;
}
main()
{  int  year, month, day, days ;
   printf("请输入年、月、日：");
   scanf("%d%d%d",&year, &month, &day);
   days = fun(year, month, day); 
   printf("%d年%d月%d日是该年的第%d天\n",year, month, day, days);
}

