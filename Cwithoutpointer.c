
#include <stdio.h>
#include <time.h>

int main() {
    clock_t start = clock(); 
     int value;
    int rows = 256;
    int cols = 256;
int mat1[rows][cols],mat2[rows][cols],resultmat[rows][cols];
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
         for (int k = 0; k < 256; ++k) {
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