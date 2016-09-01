#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ascending.h"
#include "descending.h"

int main(){

    int *array = (int *) malloc(0*sizeof(int));
    int num = 0;
    int tamanho = 0;
    char my_string[3];
    char numbers[100];
    char s[2] = " ";
    printf("Insira a ordem de ordenacao: ");
    fgets(my_string,100,stdin);

    printf("\nDigite os inteiros a serem ordenados: ");
    fgets(numbers,100,stdin);

    int i = 0;
    int flag = 0;
    char *ch;
    ch = strtok(numbers,s);
    
    while(ch != NULL){
        tamanho++;
        int n = atoi(ch);
        array = (int *) realloc(array,tamanho*sizeof(int));
        array[tamanho-1] = n;
        ch = strtok(NULL,s);
    }

    
    if(strcmp(my_string,"-d")==0 || strlen(my_string)==0){
        ascendingOrder(array,tamanho);
    }else{
        descendingOrder(array,tamanho);
    }

    for(int i=0; i<tamanho;i++){
        printf("%d ",array[i]);
    }

    return 0;
}
