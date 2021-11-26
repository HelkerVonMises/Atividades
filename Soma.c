#include <stdio.h>
#include <conio.h>

int main(){
    int a, b, c, d;
    inicio:
    printf("Programa de soma\n");
    printf("Digite o primeiro número\n");
    scanf("%i", &a);
    printf ("digite outro número\n");
    scanf("%i", &b);
c=a+b;
    printf("Resultado de %i+%i é %i\n", a, b,c);
    printf("Deseja realizar outra soma?\n");
    printf("1 para sim e 2 para não\n");
    scanf("%i", &d);
    if(d==1){
        goto inicio;
    }
    if(d==2){
      printf("É nóis parça");
    }
      else{
          printf("Tá de sacanagem???\n");
          goto inicio;
      }
    }
    