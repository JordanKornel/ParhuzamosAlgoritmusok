#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int monoton_tomb(int tomb[], int index);
void monoton_nov(int tomb[]);
int main(){

    int tomb[10];
    srand(time(NULL));
    int i;
    for (i = 0; i < 10; i++)
    {
        tomb[i] = monoton_tomb(tomb,i);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ",tomb[i]);
    }
    monoton_nov(tomb);

    return 0;
}
int monoton_tomb(int tomb[],int i){
    int max = 110;
    int elem = (rand() % (max - 10 + 1)) + 10;
    elem = elem-10;
    if(i == 0){
        return elem;
    }
    else if(tomb[i - 1] > elem){
        monoton_tomb(tomb,i);
    }
    else{
        return elem;
    }
}
void monoton_nov(int tomb[]){
    int Hiba = 0;
    int i;
    for (i = 0; i < 10 - 1; i++)
    {
        if(tomb[i + 1] < tomb[i]){
            Hiba = 1;
        }
    }
    if(Hiba==1){
        printf("\nNem Monoton novekvo!");
    }
    else{
        printf("\nMonoton novekvo!");
    }
}

