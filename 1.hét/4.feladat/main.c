#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Egesz(int minimum, int maximum);
double Tort(int minimum, int maximum);

int main(int argc, char * argv[]) {
    int i;

    srand(time(NULL));
    for (i = 0; i < 3; i++) {
        printf("Egesz: %d\n", Egesz(500, 1000));
        printf("Tort: %f\n", Tort(500.00, 1000.00));
    }

    return 0;
}

int Egesz(int minimum, int maximum) {
    return (rand() % (maximum-minimum+1)) + 1;
}

double Tort(int minimum, int maximum) {
    return ((double) rand() / (maximum - minimum)) + minimum;
}
