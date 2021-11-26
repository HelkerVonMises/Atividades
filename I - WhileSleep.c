#include <conio.h>
#include <stdio.h>
#include <unistd.h>

int main(void){
    int a, b, c;
    a=0;
    while(a<=10){
        printf("%i\n", a);
        sleep (1);
        a++;
    }
}
