#include <stdio.h>
#include <math.h>
#include <conio.h>

float main(){
   float a, b, c, d, soma, sub, mult, divi, raiz, pot, cond;
   printf("Programa calculadora\n");
   inicio:
   printf("\nO que deseja fazer?\n");
   printf("\n 1 - Soma\n 2 - Subtração\n 3 - Divisão\n 4 - Multiplicação\n 5 - Radiciação\n 6 - Potência\n 7 - Sair\n");
   scanf("%f", &c);
   if(c==7){
    goto fim;
   }
   if(c==1){
       printf("Soma\n");
       printf("Digite o primeiro valor\n");
       scanf("%f", &a);
       printf("Digite o segundo valor\n");
       scanf("%f", &b);
       soma=a+b;
       printf("\nResultado=%f\n", soma);
   }
   if(c==2){
       printf("Subtração\n");
       printf("Digite o primeiro valor\n");
       scanf("%f", &a);
       printf("Digite o segundo valor\n");
       scanf("%f", &b);
       sub=a-b;
       printf("\nResultado=%f\n", sub);
   }
       if(c==3){
       printf("Divisão\n");
       printf("Digite o primeiro valor\n");
       scanf("%f", &a);
       printf("Digite o segundo valor\n");
       scanf("%f", &b);
       divi=a/b;
       printf("\nResultado=%f\n", divi);
   }
   if(c==4){
       printf("Multiplicação\n");
       printf("Digite o primeiro valor\n");
       scanf("%f", &a);
       printf("Digite o segundo valor\n");
       scanf("%f", &b);
       mult=a*b;
       printf("\nResultado=%f\n", mult);
   }
   if(c==5){
       printf("Radiciação\n");
       printf("Digite o primeiro valor\n");
       scanf("%f", &a);
       printf("Digite o segundo da raiz\n");
       scanf("%f", &b);
       d=1/b;
       raiz=pow(a, d);
       printf("\nResultado=%f\n", raiz);
   }
   if(c==6){
       printf("Potenciação\n");
       printf("Digite o primeiro valor\n");
       scanf("%f", &a);
       printf("Digite o segundo valor\n");
       scanf("%f", &b);
       pot=pow(a, b);
       printf("\nResultado=%f\n", pot);
   }
   printf("\nDeseja fazer mais uma operação?\n");
   printf("\n 1 - Sim ou 2 - Não\n");
   scanf("%f", &cond);
   if(cond==1){
       goto inicio;
   }
   fim:
   printf("\nObrigado!");
   return 0;
}
