#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    
    double number1 = 7.3, number2;
    char s1[100], s2[100];
    double* dPtr;

    dPtr = &number1;

    printf("\nValor da variável apontada por 'dPtr': %f\n", *dPtr);

    number2 = *dPtr;

    printf("Valor da varável 'number2': %f\n", number2);
    printf("Endereco de 'number1': %p\n", &number1);
    printf("Endereco de 'dPtr': %p\n", dPtr);
    printf("\nO valor impresso decorrente do enunciado que contempla o item anterior");
    printf(" é igual ao valor do endereço gravado em dPrt?\nR.: Sim\n");

    printf("\nEntre com a string:\n");
    scanf("%s", s1);

    strcpy(s2,s1);

    printf("Resultado da comparacao entre as duas strings: %d\n", strcmp(s1,s2)); 
    
    strcat(s1,s2);
    printf("As duas strings concatenadas: %s\n", s1);

    printf("Comprimento da string armazenada em s1: %lu\n", strlen(s1));
    return 0;
}
