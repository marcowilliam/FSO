#include "types.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float *calculate_sides(Triangle triangle){

    float *sides_size;
    sides_size = (float *) malloc(3*sizeof(float));

    for(int i=0;i<3;i++){
        float x = triangle.points[i].coordinate[0][0];
        float y = triangle.points[i].coordinate[0][1];

        sides_size[i] = fabs(x-y);

    }
    
    return sides_size;
}

float calculate_area(Triangle triangle){

    float *sides = calculate_sides(triangle);
    float a = sides[0];
    float b = sides[1];
    float c = sides[2];
    float s = (a + b + c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c)); 

    return area;
}

float calculate_perimeter(Triangle triangle){

    float *sides = calculate_sides(triangle);
    float a = sides[0];
    float b = sides[1];
    float c = sides[2];
    float perimeter = (a+b+c);

    return perimeter;
}

//bool is_valid_triangle(Triangle triangle){

    

//}
