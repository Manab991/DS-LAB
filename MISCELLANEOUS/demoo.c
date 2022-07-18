#include <stdio.h>
 
int main()
{
  int a[100][100], b[100][100],c[100][100],row1,column1,row2,column2,i,j,k,sum = 0;
 
  printf("Enter the number of rows and columns of 1st matrix\n");
  scanf("%d%d",&row1,&column1);
  printf("Enter the elements of 1st matrix\n");
 
  for (  i = 0 ; i < row1 ; i++ )
    for ( j = 0 ; j < column1 ; j++ )
      scanf("%d", &a[i][j]);
 
  printf("Enter the number of rows and columns of 2nd matrix\n");
  scanf("%d%d",&row2,&column2);
 
  if ( column1 != row2 )
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
    printf("Enter the elements of 2nd matrix\n");
 
    for ( i = 0 ; i < row2 ; i++ )
      for ( j = 0 ; j < column2 ; j++ )
        scanf("%d", &b[i][j]);

    printf("1st matrix is :\n");
    for(i=0;i<row1;i++)
    {
       for(j=0;j<column1;j++)
       {
           printf("\t%d",a[i][j]);
       }
       printf("\n");
    }

     printf("2nd matrix is :\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
       {
           printf("\t%d",a[i][j]);
       }
       printf("\n");
    }
 
    for ( i = 0 ; i < row1 ; i++ )
    {
      for ( j = 0 ; j < column2 ; j++ )
      {
        for ( k = 0 ; k < row2 ; k++ )
        {
          sum = sum + a[i][k]*b[k][j];
        }
 
        c[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("multiplicated matix :\n");
 
    for ( i = 0 ; i < row1 ; i++ )
    {
      for ( j = 0 ; j < column2 ; j++ )
        printf("\t%d", c[i][j]);
 
      printf("\n");
    }
  }
 
  return 0;
}