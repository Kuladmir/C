#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define  N  5
double fun (int w[][N])
{
    int count = 0, i, j;
    for (i = 0, j = 0; i < N; i++)
        if (i == 0)
            count += w[i][i];
        else
            count += (w[i][j] + w[j][i]);
    for (i = N-1, j = N-1; i > 0; i--)
        if (i == 4)
            count += w[i][j];
        else
            count += (w[i][j] + w[j][i]);
    return (count / ((N - 1) * 4.0));
}
void main()
{
  FILE *wf;
  int a[N][N]={0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1};
  int i, j;
  double s;
  system("CLS");
  printf("*****The array*****\n ");
  for (i=0; i<N; i++)
    { for (j=0;j<N;j++)
         {printf("%4d ",a[i][j]);}
      printf("\n ");
    }
  s=fun(a);
  printf("*****THE RESULT*****\n ");
  printf("The sum is : %lf\n ",s);
/******************************/
  wf=fopen("out.dat","w");
  fprintf (wf,"%lf",s);
  fclose(wf);
/*****************************/
}
