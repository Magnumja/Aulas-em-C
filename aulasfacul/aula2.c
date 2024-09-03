#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() 


{

 int x;

 printf("Me fale um numero e te direi se ele eh negativo: ");
 scanf("%d", &x);

setlocale(LC_ALL, ""); 

if (x >= 0) {
                printf("\nPositivo!", x);
            } else {
                printf("\nNegativo");
            }
           

    return 0;
}