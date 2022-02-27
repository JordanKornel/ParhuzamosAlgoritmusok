#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TICK(X) clock_t X = clock()
#define TOCK(X) printf("Eltelt ido: %g sec.\n", (double)(clock() - (X)) / CLOCKS_PER_SEC)

void primeNumbers(int number);

int main(int argc, char** argv) {
    int i = 0;
    int intArray[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000};

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_0);
    primeNumbers(intArray[i]);
    TOCK(TIME_0);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_1);
    primeNumbers(intArray[i]);
    TOCK(TIME_1);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_2);
    primeNumbers(intArray[i]);
    TOCK(TIME_2);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_3);
    primeNumbers(intArray[i]);
    TOCK(TIME_3);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_4);
    primeNumbers(intArray[i]);
    TOCK(TIME_4);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_5);
    primeNumbers(intArray[i]);
    TOCK(TIME_5);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_6);
    primeNumbers(intArray[i]);
    TOCK(TIME_6);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_7);
    primeNumbers(intArray[i]);
    TOCK(TIME_7);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_8);
    primeNumbers(intArray[i]);
    TOCK(TIME_8);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_9);
    primeNumbers(intArray[i]);
    TOCK(TIME_9);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_10);
    primeNumbers(intArray[i]);
    TOCK(TIME_10);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_11);
    primeNumbers(intArray[i]);
    TOCK(TIME_11);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_12);
    primeNumbers(intArray[i]);
    TOCK(TIME_12);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_13);
    primeNumbers(intArray[i]);
    TOCK(TIME_13);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_14);
    primeNumbers(intArray[i]);
    TOCK(TIME_14);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_15);
    primeNumbers(intArray[i]);
    TOCK(TIME_15);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_16);
    primeNumbers(intArray[i]);
    TOCK(TIME_16);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_17);
    primeNumbers(intArray[i]);
    TOCK(TIME_17);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_18);
    primeNumbers(intArray[i]);
    TOCK(TIME_18);
    i++;
    printf("\n");

    printf("%d - ig a primszamok:\n", intArray[i]);
    TICK(TIME_19);
    primeNumbers(intArray[i]);
    TOCK(TIME_19);
    i++;
    printf("\n");

    return 0;
}

void primeNumbers(int number) {
    int i, c;
    int a = 1;

    while (a <= number) {
        c = 0;
        i = 2;

        while (i <= a/2) {
            if (a % i == 0) {
                c++;
                break;
            }
            i++;
        }

        if (c == 0 && a != 1) {
            printf("%d|", a);
        }

        a++;
    }
    printf("\n\n");
}
