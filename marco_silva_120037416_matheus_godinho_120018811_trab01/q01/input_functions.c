#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "input_functions.h"

Triangle input_points(){

    Triangle triangle;
    for(int i=0; i<3; i++){
        printf("Entre com a %d coordenada x e y do triangulo:\n",i+1);
        scanf("%f %f", &triangle.points[i].coordinate[0][0], &triangle.points[i].coordinate[0][1]);
    }

    return triangle;

}