#include <stdio.h>

int main() {
    int matrix1[3][3],matrix2[3][3],result[3][3];
  printf("Please enter values in Matrix1");
    
       for (int r=0;r<3;r++)
       {
          for(int c=0;c<3;c++)
          scanf("%d",&matrix1[r][c]);
       }
       
  printf("Please enter values in Matrix2");
    
       for (int r=0;r<3;r++)
       {
          for(int c=0;c<3;c++)
          scanf("%d",&matrix2[r][c]);
       }
  
       

    // Multiplying matrices
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                result[i][j] =  result[i][j]+ matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Printing the result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
