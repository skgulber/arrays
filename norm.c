input:4 2   output:54
      3 5

  case 1:0<2 T
        0<2   T    0+a[0][0]*a[0][0]     16+a[0][1]*a[0][1]     
                     0+4*4=16                16+5*5=41
  case 2: 1<2 T
          1<2 T      41+a[1][0]*a[1][0]          45+a[1][1]*a[1][1]   
                      41+2*2=45                      45+3*3=54
  #include<stdio.h>
int main()
{
  int i,j,a[2][2],sum=0;
printf("enter the array elements");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
sum=sum+a[i][j]*a[i][j];
}
}
printf("norm of matrix is %d",sum);
}
