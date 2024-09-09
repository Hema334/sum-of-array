/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
void main()
{
int arr1[2][3] ,arr2[2][3],i,j;
  for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
  {
      printf("enter element:");
      scanf("%d",&arr1[i][j]);
  }
  }
   for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
  {
      printf("enter element:");
      scanf("%d",&arr2[i][j]);
  }
  }
  for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
  {
      printf("%d",arr1[i][j]+arr2[i][j]);
  }
  }
}
  
