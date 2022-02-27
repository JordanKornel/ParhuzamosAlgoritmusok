#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TICK(X) clock_t X = clock()
#define TOCK(X) printf("Eltelt ido: %g sec.\n", (double)(clock() - (X)) / CLOCKS_PER_SEC)

int Random(int minimum, int maximum);

int main(int argc, char** argv) {
    int aNumber, bNumber, cNumber;

    srand(time(NULL));

    aNumber = Random(0, 100);
    bNumber = Random(0, 100);

    printf("%d + %d = ?\n", aNumber, bNumber);

    TICK(C_TIME);
    scanf("%d", &cNumber);
    TOCK(C_TIME);

    if ((aNumber + bNumber) == cNumber) {
        printf("A valasz helyes!\n");
    } else {
        printf("A valasz helytelen!\n");
    }

    return 0;
}

int Random(int minimum, int maximum) {
    return (rand() % (maximum-minimum+1)) + 1;
}
