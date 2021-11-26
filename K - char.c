#include <conio.h>
#include <stdio.h>
#include <unistd.h>

int main(void){
    char a, b, c;
    a='a';
    while(a<='z')
    {
        system("clear");
        printf("%c\n", a);
        sleep (1);
        a++;
    }
}
