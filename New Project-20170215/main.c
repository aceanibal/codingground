#include <stdio.h>

int array[50];
int size;

    void getGrade(int argc, char *argv[]){
        if(argc > 51){
            printf("Array size is too large");
        }
        else{
            int i;
            for (i = 1; i < argc; i++){
            array[i-1] = atoi(argv[i]); 
            }
        }
    }

    int findMaximum(int grade[]){
        int max = grade[0];
        int i;
         for (i = 0; i < size; i++) {
         if (grade[i] > max) {
            max = grade[i];
            }
        }
        return max;
    }
    
    int findMinimum(int grade[]){
        int min = grade[0];
        int i;
         for (i = 0; i < size; i++) {
         if (grade[i] < min) {
            min = grade[i];
            }
        }
        return min;
    }
    
    float calculateAverage(int grade[]){
        int sum = 0;
        int i;
         for (i = 0; i < size; i++) {
         sum = sum + grade[i];
        }
        return (float) (sum / size);
    }
    
    void printResults(int maximum, int minimum, float average){
        printf("The maxiumum grade is %i", maximum);
        printf("\n");
        printf("The minumum grade is %i", minimum);
        printf("\n");
        printf("The average grade is %f", average);
        printf("\n");
        
    }
    
    int main(int argc, char *argv[]){
        size = argc - 1;
        getGrade(argc,argv);
        int max = findMaximum(array);
        int min = findMinimum(array);
        float ave = calculateAverage(array);
        printResults(max, min, ave);
    } 