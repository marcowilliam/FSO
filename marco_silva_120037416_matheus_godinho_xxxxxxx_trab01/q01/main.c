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

    printf("%f\n", triangle.points[0].coordinate[0][0]);
    printf("%f\n", triangle.points[0].coordinate[0][1]);
    printf("lado 1: %f\n",sides_size[0]);
    printf("lado 2: %f\n",sides_size[1]);
    printf("lado 3: %f\n",sides_size[2]);
    printf("Area: %.2f\n", triangle_area);


}

