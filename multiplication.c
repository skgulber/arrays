enter the first matrix
1 2 3
4 5 6
0 2 7
enter the second matrix
0 1 2
3 4 5
6 3 5
multiplication of matrix is
0	2	6	
12	20	30	
0	6	35	
  
#include<stdio.h>
int main()
{
  int a[3][3],b[3][3],mul[3][3],i,j,k;
printf("enter the first matrix");
for(i=0;i<3;i++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}}
printf("multiplication of matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
mul[i][j]=a[i][j]*b[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
}
