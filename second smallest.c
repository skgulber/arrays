#include<stdio.h>
int main()
{
 
  int a[5],small1=0,small2=0;
   printf("enter array elements:");
for(int i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<5;i++)
{
if(a[i]<small1)
{
small2=small1;
small1=a[i];
}
else if(a[i]<small2 && a[i]>small1)
{
small2=a[i];
}
}
printf("max1=%d\n",small1);
printf("max2=%d\n",small2);
}
