#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    int b;
    
    
    for (b = 0; b < atoi(argv[1]); b++){
        
        for (i = 0; i < atoi(argv[1]) ; i++){
            printf("*");
        }
        
        printf("\n");
    }
}
