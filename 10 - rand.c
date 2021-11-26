#include <stdio.h>
#include <conio.h>
#include <unistd.h>     //sleep
#include <stdlib.h>     //rand

int main(){
    int a, b, c;
    for(a=0; a<=10; a++){
        b=rand()%15;
        printf("%i\n", b);
        sleep (1);
    }
}