#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ARRAY_SIZE 10

int randomInteger(int minimum, int maximum);
bool isValitArray(int intArray[]);

int main(int argc, char** argv) {
    int i, j;
    bool isValid;
    int intArray[ARRAY_SIZE];
    int duplicate;

    srand(time(NULL));

    for (i = 0; i < ARRAY_SIZE; i++) {
        isValid = true;
        duplicate = randomInteger(0, 100);
    printf("%d\n", duplicate);
        do {
            if (duplicate <= 50) {
                intArray[i] = intArray[randomInteger(0, i)];
            } else {
                intArray[i] = randomInteger(0, ARRAY_SIZE*10);
                for (j = 0; j < i; j++) {
                    if (intArray[i] == intArray[j]) {
                        isValid = false;
                        break;
                    }
                }
            }
        } while(!isValid);
    }

    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d | ", intArray[i]);
    }

    printf("\nValid Array: %s\n", (isValitArray(intArray) ? "Yes" : "No"));

    return 0;
}

int randomInteger(int minimum, int maximum) {
    return (rand() % (maximum-minimum+1));
}

bool isValitArray(int intArray[]) {
    int i, j;
    for (i = 0; i < ARRAY_SIZE; i++) {
        for (j = (i+1); j < ARRAY_SIZE; j++) {
            if (intArray[i] == intArray[j]) {
                printf("\n%d - %d\n", intArray[i], intArray[j]);
                return false;
            }
        }
    }
    return true;
}
