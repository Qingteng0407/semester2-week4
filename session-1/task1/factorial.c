
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    f[0] = 1; // Factorial of 0 is 1
    for (int i = 1; i < 20; i++) {
        f[i] = f[i-1] * i; // Factorial of i is factorial of (i-1) multiplied by i
    }
    for (int i = 0; i < 20; i++) {
        printf("Factorial of %d is %d\n", i, f[i]);//到后面会有溢出
    }
    return 0;
 }
