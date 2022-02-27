#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Egesz(int minimum, int maximum);

int main(int argc, char** argv) {
    int aNumber, bNumber;
    int Random = 0;

    srand(time(NULL));

    if (argc != 3) {
        printf("[Error] Minimum 2 adatt kell!\n\n");
        exit(1);
    }

    aNumber = atoi(argv[1]);
    bNumber = atoi(argv[2]);

    if (bNumber >= aNumber) {
        Random = Egesz(aNumber, bNumber);
    } else {
        Random = Egesz(bNumber, aNumber);
    }

    printf("%d\n", Random);
    return 0;
}

int Egesz(int minimum, int maximum) {
    return (rand() % (maximum-minimum+1)) + 1;
}
