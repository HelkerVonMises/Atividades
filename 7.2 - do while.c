#include <conio.h>
#include <stdio.h>
#include <unistd.h>

int main(void){
    int a, b, c;
    a=0;
    do
    {
        printf("%i\n", a);
        sleep (1);
        a++;
    }
    while(a<=10);
}