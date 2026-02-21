
/*
Name: QingtengZhang
Student ID: 201821913
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    int n = argc - 1;
    char buffer[100]; // make sure this is big enough to hold answer
    // process the command-line data using appropriate string functions
    if (n < 1||n > 10) {
        return 1;

        }

    for (int i = 1;i <= n; i++) {
        int len = strlen(argv[i]);
        
        printf("%s",argv[i]);

        if (i < n) {
                printf("-");
            }
    }
    
    printf("\n");
    return 0;
    }   