#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

void alvas4(void* _)
{
    sleep(4);
    printf("4 sec alvas\n");
}



int main()
{
    sleep(8);
    printf("8 sec alvas\n");

    pthread_t elso;

    pthread_create(&elso,NULL,alvas4,NULL);

    pthread_join(elso,NULL);



    printf("Noki");
    return 0;
}

