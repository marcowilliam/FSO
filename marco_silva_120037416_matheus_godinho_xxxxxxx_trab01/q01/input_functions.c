#include <stdio.h>
#include <stdlib.h>

float** input_points(){

    float **coordinates;
    coordinates = (float**) malloc(3*sizeof(float**));
    for(int i=0; i<3; i++){    
        coordinates[i] = (float*) malloc(2*sizeof(float*));
        printf("Entre com a %d coordenada x e y\n", i);
        scanf("%f %f", &coordinates[i][0], &coordinates[i][1]);
    }

    return coordinates;


}
