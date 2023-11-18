enter the array 1
1
2
3
4
5
6
44
8
9
10
the elements array are:1	2	3	4	5	6	44	8	9	10	
#include<stdio.h>
int main()
{
  int i,a[10];
printf("enter the array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("the elements array are:");
  for(i=0;i<10;i++)
  printf("%d\t",a[i]);
}
