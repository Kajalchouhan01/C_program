#include<stdio.h>
void main()
{
int row,col; //row is row of matrix and col is colomn of matrix
printf("Enter the row =");
scanf("%d",&row);
printf("Enter the col =");
scanf("%d",&col);

  int matrix1[row][col],matrix2[row][col],result[row][col];
  printf("Please enter values in Matrix1 :");
    
       for (int r=0;r<row;r++)
       {
          for(int c=0;c<col;c++)
          scanf("%d",&matrix1[r][c]);
       }
       
  printf("Please enter values in Matrix2 :");
    
       for (int r=0;r<row;r++)
       {
          for(int c=0;c<col;c++)
          scanf("%d",&matrix2[r][c]);
       }
       
    
  printf("\n your matrix1 is\n");

     for (int r=0;r<row;r++)
     {
        for(int c=0;c<col;c++)
        printf("  %d  ",matrix1[r][c]);
        printf("\n");
     }
  printf("\n your Matrix2 is\n");

     for (int r=0;r<row;r++)
     {
        for(int c=0;c<col;c++)
        printf("  %d  ",matrix2[r][c]);
        printf("\n");
     }
     for (int r = 0; r < row; r++) 
     {
        for (int c = 0; c < col; c++) 
        {
            result[r][c] = matrix1[r][c] + matrix2[r][c];
        }
     }

    // Display the result matrix
    printf("Sum of the two matrix :\n");
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++) 
        {
            printf("%d\t", result[r][c]);
        }
        printf("\n");
    }
     

}

