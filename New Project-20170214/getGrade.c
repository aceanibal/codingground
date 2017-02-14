#include <stdio.h>


    void getGrade(int argc, char *argv[]){

      //  int b = 1;
 
        //while (b <= argc){
       //     array[b-1] = atoi(argv[b]);
        
      //      printf("%d",grade[b-1]);
     //        b++;
        //}
    }

    int findMaximum(int grade[]){
        int max = grade[0];
        int i;
         for (i = 0; i < sizeof(grade); i++) {
         if (grade[i] > max) {
            max = grade[i];
            }
        }
        return max;
    }
    
    int findMinimum(int grade[]){
        int min = grade[0];
        int i;
         for (i = 0; i < sizeof(grade); i++) {
         if (grade[i] < min) {
            min = grade[i];
            }
        }
        return min;
    }
    
    float calculateAverage(int grade[]){
        int sum = 0;
        int i;
         for (i = 0; i < sizeof(grade); i++) {
         sum = sum + grade[i];
        }
    
        printf("%i", sum);
         printf("%i", size);
        return (float) (sum / (sizeof(grade)));
    }
    
    void printResults(int maximum, int minimum, float average){
        printf("The maxium grade is %i", maximum);
        printf("The minumum grade is %i", minimum);
        printf("The average grade is %f", average);
        
    }
    
    int main(int argc, char *argv[]){
        int array[50] = {1, 2, 3, 4, 5};
        //getGrade(argc,*argv);
        int max = findMaximum(array);
        int min = findMinimum(array);
        float ave = calculateAverage(array);
        printResults(max, min, ave);
    }    

