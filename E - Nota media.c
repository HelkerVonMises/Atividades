#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
   int a, b, c;
   printf("Programa de média\n");
   printf("Digite as notas e verifique \n");
   printf("se o aluno está aprovado ou reprovado\n");
   printf("Digite a nota 1:\n");
   scanf("%i", &a);
   printf("Digite a nota 2\n");
   scanf("%i", &b);
   c=(a+b)/2;
   printf("Média=%i\n", c);
   if (c>=60){
       printf("Aprovado");
       }else
       if(c<60, c>=40){
           printf("Recuperação");
          } else
           if(c<40){
               printf("Reprovado");
   }
}
