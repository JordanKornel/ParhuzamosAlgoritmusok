#include <stdio.h>
#ifdef _WIN32
#else
#endif

int main(int argc, char * argv[]) {
    int count = 0;

    while (1) {
        if (count == 5) {
            break;
        }

        printf("%d\n", count);

        count++;
        sleep(1);
    }

    return 0;
}
