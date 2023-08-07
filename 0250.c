#include  <stdio.h>
//输出存在不及格科目的学生学号以及数量
#define N 4 //修改学生数
typedef struct
{ char num[8];  
  double score[2];
/**********found**********/
} STU;
int  fun(STU  std[ ], int  n)
{  int  i, k=0;
   for(i=0; i<n; i++)
/**********found**********/
     if( std[i].score[0]<60||std[i].score[1]<60 ) 
     { k++;     printf("学号：%s ",std[i].num);   }
/**********found**********/
   return k ;
}
main()
{  STU  std[N]={ "N1001", 76.5,82.0 ,"N1002", 53.5,73.0, 
                "N1005", 80.5,66.0,"N1006", 81.0,56.0 };
  printf( "\n共有%d位学生有不及格科目\n" , fun(std,N) );
}

