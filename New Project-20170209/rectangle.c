#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("%d",argc);
    int i;
    int b;
    
    for (b = 0; b < argc; b++){
        
        for (i = 0; i < argc ; i++){
            printf("*");
        }
        
        printf("\n");
    }
}

