#include <stdio.h>
#include <conio.h>
#include <unistd.h>     //sleep
#include <stdlib.h>     //rand
#include <string.h>     //srand
#include <time.h>       //time

int main(){             //int a[x] sendo x a quantidade de variáveis sendo elas a0; a1 ... ax
    int a, b, c;
    srand(time(NULL));
    for(a=0; a<=10; a++){
        b=rand()%15;
        printf("%i ", b);
    }
}
