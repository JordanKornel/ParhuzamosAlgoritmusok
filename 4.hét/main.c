#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

#define ARRAY_LENGTH 3

void Sequential_Multi(double pDouble[ARRAY_LENGTH]);
void OpenMP_Multi(double pDouble[ARRAY_LENGTH]);
void OpenMP_Reduction_Multi(double pDouble[ARRAY_LENGTH]);

int main() {
    srand(time(NULL));

    double randArray[ARRAY_LENGTH];

    for (int i = 0; i < ARRAY_LENGTH; i++) {
        randArray[i] = (double)rand()/(double)(1000);
    }

    for (int i = 0; i < ARRAY_LENGTH; i++) {
        printf("Array numbers: %f\n", randArray[i]);
    }

    Sequential_Multi(randArray);
    OpenMP_Reduction_Multi(randArray);
    OpenMP_Multi(randArray);
    return 0;
}

void Sequential_Multi(double pDouble[ARRAY_LENGTH]) {
    double result = 1;
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        result *= pDouble[i];
    }
    printf("Sequential multi: %f\n", result);
}

void OpenMP_Multi(double pDouble[ARRAY_LENGTH]){
    double result = 1;
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        result *= pDouble[i];
    }
    printf("OpenMP multi: %f\n", result);
}

void OpenMP_Reduction_Multi(double pDouble[ARRAY_LENGTH]) {
    double result = 1;
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        result *= pDouble[i];
    }
    printf("OpenMP Reduction multi: %f\n", result);
}
