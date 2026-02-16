
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float d;

    /*
    Code to compute the dot product
    Store your answer in d
    print your final answer
    */
       d = 0.0; //一定要先initialize d，否则会得到一个随机值
       for (int i = 0; i < 5; i++) {
           d += a[i] * b[i];
       }
       printf("%.2f\n", d);//保留两位小数
    return 0;
 }