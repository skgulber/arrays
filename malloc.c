enter the no of rows and cols 3 3
3 3
enter the array
1 2 3
4 5 6
 7 8 9
 7 8 9
displaying array elements
1	2	3	
4	5	6	
7	8	9	

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int **array,i,j,rows,cols;
printf("enter the no of rows and cols");
scanf("%d%d",&rows,&col);
array=(int**)malloc(rows*sizeof(int*));
for(i=0;i<rows;i++)
{
array[i]=(int**)malloc(sizeof(int)*col);
}
printf("enter the array\n");
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&array[i][j]);
}
}
printf("displaying array elements\n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
printf("%d\t",array[i][j]);
}
printf("\n");
}
for(i=0;i<rows;i++)
  free(array[i]);
free(array);
}
  
