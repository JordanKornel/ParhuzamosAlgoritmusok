#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInteger(int minimum, int maximum);
void formatInteger(int number);

int main(int argc, char** argv) {
    int number;

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        number = randomInteger(0, 99999999);

        formatInteger(number);
        printf("%d\n", number);
    }

    return 0;
}

int randomInteger(int minimum, int maximum) {
    return (rand() % (maximum-minimum+1)) + 1;
}

void formatInteger(int number) {
    int count = 0;
    int i;

    if (number > 1000000) {
        count = 1;
    } else if (number > 100000) {
        count = 2;
    } else if (number > 10000) {
        count = 3;
    } else if (number > 1000) {
        count = 4;
    } else if (number > 100) {
        count = 5;
    } else if (number > 10) {
        count = 6;
    } else if (number > 1 || number == 0) {
        count = 7;
    }

    for (i = 0; i < count; i++) {
        printf("0");
    }
}
