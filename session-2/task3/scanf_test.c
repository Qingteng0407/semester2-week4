
#include <stdio.h>

int main( void ) {
    int i,j,k;

    int count = scanf("%d %d %d",&i,&j,&k);//read 3 integers from the user (and store them in i,j,k)

    printf("Read %d values\n",count);
    printf("Values: %d %d %d\n",i,j,k);

    return 0;
}
//
