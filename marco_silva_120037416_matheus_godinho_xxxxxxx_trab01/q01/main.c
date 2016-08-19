#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "input_functions.h"
#include "triangle_functions.h"
#include "types.h"

int main(){

    Triangle triangle = input_points();
    float *sides_size = calculate_sides(triangle);
    float triangle_area = calculate_area(triangle);
    float triangle_perimeter = calculate_perimeter(triangle);

    printf("Lado 1: %.2f\n",sides_size[0]);
    printf("Lado 2: %.2f\n",sides_size[1]);
    printf("Lado 3: %.2f\n",sides_size[2]);
    printf("Area: %.2f\n", triangle_area);
    printf("Perimetro: %.2f\n", triangle_perimeter);


}

