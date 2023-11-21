enter array elements:7 5 3 9 6
max1=7
max2=0
max1=7
max2=5
max1=7
max2=5
max1=9
max2=7
max1=9
max2=7

#include<stdio.h>
int main()
{
  printf("enter array elements:");
  int a[5],max1=0,max2=0;
for(int i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<5;i++)
{
if(a[i]>max1)
{
max2=max1;
max1=a[i];
}
else if(a[i]>max2 && a[i]<max1)
{
max2=a[i];
}
printf("max1=%d\n",max1);
printf("max2=%d\n",max2);
return 0;
}}
