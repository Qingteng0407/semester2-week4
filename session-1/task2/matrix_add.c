
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
    for (int i = 0; i < 4; i++){
         for (int j = 0; j < 4; j++) {
               a[i][j] = 1.0;
               b[i][j] = 1.0;
         }//用两层for loop来初始化a和b矩阵的每个元素为1.0
      }
      for (int i = 0; i < 4; i++) {
         for (int j = 0; j < 4; j++) {
               c[i][j] = a[i][j] + b[i][j];
               printf("%.2f ", c[i][j]);
         }
         printf("\n");//每遍历一行j就换行一次,非常聪明
      }
    return 0;
 }
