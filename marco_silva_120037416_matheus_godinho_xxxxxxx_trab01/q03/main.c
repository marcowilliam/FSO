#include <stdlib.h>
#include <stdio.h>

int main(){
    
    double number1 = 7.3, number2;
    char s1[100], s2[100];
    double* dPtr;
    dPtr = &number1;
    printf("Valor da variável apontada por 'dPtr': %f\n", *dPtr);
    number2 = *dPtr;
    printf("Valor da varável 'number2': %f\n", number2);
    printf("Endereco de 'number1': %p\n", &number1);
    printf("Endereco de 'dPtr': %p\n", dPtr);

    return 0;
}
