#include  <stdio.h>
//计算第一门课的平均分
typedef  struct
{  char  num[8];
  double  score[2];
}STU ;
double fun(STU  std[], int  n)
{  int   i;
/**********found**********/
   double  sum = 0.0 ;
/**********found**********/
   for(i=0; i<4 ; i++)
/**********found**********/
      sum += std[i].score[0]; 
   return  sum/n;
}
main()
{  STU  std[ ]={ "N1001", 76.5,82.0 ,"N1002", 66.5,73.0, 
              "N1005", 80.5,66.0,"N1006", 81.0,56.0 };
   printf("第1门课程的平均分是：%lf\n", fun(std,4) );
}

