enter the matrix 1 2 3
1 2 3
4 5 6
7 8 9
the matrix is
1	2	3	
4	5	6	
7	8	9	
sum of rows :6
sum of coloums:12
sum of rows :15
sum of coloums:15
sum of rows :24
sum of coloums:18
 ............................................................................ 
#include<stdio.h>
int main()
{
  int i,j,a[3][3],s1,s2;
printf("enter the matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf(%d",&a[i][j]);
  }
}
printf("the matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
s1=s2=0;
for(j=0;j<3;j++)
{
s1=s1+a[i][j]'
  s2=s2+a[j][i];
  }
printf("sum of rows :%d\n",s1);
printf("sum of coloums:%d\n",s2);
}
}
