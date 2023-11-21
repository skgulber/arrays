enter the array 1
1
4 
7
8
5
2
9
6
3
0
largest is 9
smallest is 0
  
#include<stdio.h>
int main()
{
  int a[10],i,min=0,max=0;
printf("enter the array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
  if(max<a[i])
  {
      max=a[i];
  }
 if(min>a[i])
 {
     min=a[i];
}
}
printf("largest is %d\n",max);
printf("smallest is %d\n",min);
}
