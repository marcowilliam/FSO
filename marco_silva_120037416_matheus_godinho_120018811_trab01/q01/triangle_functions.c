#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "types.h"
#include "triangle_functions.h"


float *calculate_sides(Triangle triangle){

    float *sides_size;
    sides_size = (float *) malloc(3*sizeof(float));

        float ax = triangle.points[0].coordinate[0][0];
        float ay = triangle.points[0].coordinate[0][1];
        float bx = triangle.points[1].coordinate[0][0];
        float by = triangle.points[1].coordinate[0][1];
        float cx = triangle.points[2].coordinate[0][0];
        float cy = triangle.points[2].coordinate[0][1];


        sides_size[0] = sqrt((double)(bx-ax) * (bx-ax) + (by-ay) * (by-ay));
        sides_size[1] = sqrt((double)(bx-cx) * (bx-cx) + (by-cy) * (by-cy));
        sides_size[2] = sqrt((double)(ax-cx) * (ax-cx) + (ay-cy) * (ay-cy));

    
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

bool is_valid_triangle(Triangle triangle){

	float *sides = calculate_sides(triangle);
    bool validation;
    float a = floorf(sides[0] * 100) / 100;
    float b = floorf(sides[1] * 100) / 100;
    float c = floorf(sides[2] * 100) / 100;

    /*printf("\n\n****** a: %f > %f *******\n\n", a+b, c);
    printf("\n\n****** a: %f > %f *******\n\n", a+c, b);
    printf("\n\n****** a: %f > %f *******\n\n", b+c, a);*/
    
    if(a+b > c && a+c > b && b+c > a)
    	validation = true;
    
    else 
    	validation = false;

    return validation;


}

