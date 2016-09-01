#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "types.h"
#include "input_functions.h"
#include "triangle_functions.h"


int main(){

    Triangle triangle = input_points();

    if(is_valid_triangle(triangle)){

	    float *sides_size = calculate_sides(triangle);
	    float triangle_area = calculate_area(triangle);
	    float triangle_perimeter = calculate_perimeter(triangle);
	    printf("\n--------------------------\nO seu triangulo possui:\n");
	    printf("Lado 1: %.2f\n",sides_size[0]);
	    printf("Lado 2: %.2f\n",sides_size[1]);
	    printf("Lado 3: %.2f\n",sides_size[2]);
	    printf("Area: %.2f\n", triangle_area);
	    printf("Perimetro: %.2f\n\n", triangle_perimeter);
	}

	else{
		printf("\n--------------------------------------------------\n");
		printf("As coordenadas informadas não formam um triangulo!\n\n");
	}


}

