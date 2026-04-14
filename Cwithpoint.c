
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    clock_t start = clock();
     int value;
    int rows = 32;
    int cols = 32;
int **mat1,**mat2,**resultmat;
    mat1 = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        mat1[i] = (int *)malloc(cols * sizeof(int));
    }

 mat2 = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        mat2[i] = (int *)malloc(cols * sizeof(int));
    }
     resultmat = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        resultmat[i] = (int *)malloc(cols * sizeof(int));
    }

value=1;

     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat1[i][j] = value++;
        }
    }
    value=1;

     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat2[i][j] = value++;
        }
    }
   

    
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
         for (int k = 0; k < 32; ++k) {
            resultmat[i][j] += mat1[i][k] * mat2[k][j];
         }
      }
   }
   
   for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", resultmat[i][j]); 
        }
        printf("\n"); 
    }
  clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC; 
    printf("Time spent: %f seconds\n", time_spent);

    return 0;
}