#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

float mais();
float menos();
float vezes();
float divis();
float radic();
float poten();

    float a, b, c, d, soma, sub, mult, divi, raiz, pot, cond;
    
float main(){
   
        printf("Programa calculadora\n");
    inicio:
        printf("\nO que deseja fazer?\n");
        printf("\n 1 - Soma\n 2 - Subtração\n 3 - Divisão\n 4 - Multiplicação\n 5 - Radiciação\n 6 - Potência\n 7 - Sair\n");
            scanf("%f", &c);
    if(c==7){
    goto fim;
    }
    if(c==1){
        mais();
    }
    if(c==2){
        menos();
    }
    if(c==3){
        divis();
    }
    if(c==4){
        vezes();
    }
    if(c==5){
        radic();
    }
    if(c==6){
        poten();
    }
        printf("\nDeseja fazer mais uma operação?\n");
        printf("\n 1 - Sim ou 2 - Não\n");
            scanf("%f", &cond);
    if(cond==1){
    system("clear");
        goto inicio;
    }
    fim:
    system("clear");
        printf("\nObrigado!");
    return 0;
}

float mais(){
    system("clear");
        printf("Soma\n");
        printf("Digite o primeiro valor\n");
            scanf("%f", &a);
        printf("Digite o segundo valor\n");
         scanf("%f", &b);
        soma=a+b;
    system("clear");
        printf("\nResultado=%f\n", soma);
}

float menos(){
    system("clear");
        printf("Subtração\n");
        printf("Digite o primeiro valor\n");
            scanf("%f", &a);
        printf("Digite o segundo valor\n");
            scanf("%f", &b);
        sub=a-b;
    system("clear");
        printf("\nResultado=%f\n", sub);
}

float divis(){
    system("clear");
        printf("Divisão\n");
        printf("Digite o primeiro valor\n");
            scanf("%f", &a);
        printf("Digite o segundo valor\n");
            scanf("%f", &b);
        divi=a/b;
    system("clear");
        printf("\nResultado=%f\n", divi);
}

float vezes(){
    system("clear");
        printf("Multiplicação\n");
        printf("Digite o primeiro valor\n");
            scanf("%f", &a);
        printf("Digite o segundo valor\n");
            scanf("%f", &b);
        mult=a*b;
    system("clear");
        printf("\nResultado=%f\n", mult);
}

float radic(){
    system("clear");
        printf("Radiciação\n");
        printf("Digite o primeiro valor\n");
            scanf("%f", &a);
        printf("Digite o segundo da raiz\n");
            scanf("%f", &b);
        d=1/b;
        raiz=pow(a, d);
    system("clear");
        printf("\nResultado=%f\n", raiz);
}

float poten(){
    system("clear");
        printf("Potenciação\n");
        printf("Digite o primeiro valor\n");
            scanf("%f", &a);
        printf("Digite o segundo valor\n");
            scanf("%f", &b);
        pot=pow(a, b);
    system("clear");
        printf("\nResultado=%f\n", pot);
}
