
#include <stdio.h>

int main( void ) {

    // define suitable data
    int a,b;
    char c,d;

    int sum = scanf("%d %c %d %c",&a,&c,&b,&d);
    // use scanf to read from the terminal
    // print the output from scanf and the data values 
    printf("Read %d values\n",sum);
    printf("Values: %d %c %d %c\n",a,c,b,d);
    //then use fget to read from the terminal and print the output and data values again
    getchar(); 

    char buffer[100];
    fgets(buffer, sizeof(buffer), stdin);

    printf("Values: %d %c %d %c\n",a,c,b,d);

    int count = sscanf(buffer,"%d %c %d %c",&a,&c,&b,&d);
    printf("sscanf read %d values\n", count);
    printf("Values: %d %c %d %c\n",a,c,b,d);
    
    return 0;
}