#include <stdio.h>
void main()
{
  int arr1[3][3],i,j;
  int *p;
  int x=0,y=0;
       printf("\n\nRead a array of size 3x3 and print the matrix :\n");
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }
  printf("\n");
  printf("Read and Print an array of elements using only Pointers:\n");
  p=&arr1[0][0];

 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",*(p+(i*3)+j));
  }
 printf("\n\n");
 printf("To find the Diagonal Sum of First & Second side : \n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
            if(i==j)
                x+=arr1[i][j];
            if((i+j)==(3-1))
                y+=arr1[i][j];
      }
  }

 printf("\nFirst Diagonal Sum=%d", x);
 printf("\nSecond Diagonal Sum=%d", y);
 printf("\n\n");
}
