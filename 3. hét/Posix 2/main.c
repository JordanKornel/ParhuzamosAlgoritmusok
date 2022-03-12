#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

void alvas1(void* _)
{
    sleep(1);
    printf("1 sec alvas\n");
}



int main()
{
    int i;
    pthread_t tomb[60];
    for(i=0; i<60; i++){
        pthread_create(&tomb[i],NULL,alvas1,NULL);
        pthread_join(tomb[i],NULL);
    }
    printf("Done");
    return 0;
}

