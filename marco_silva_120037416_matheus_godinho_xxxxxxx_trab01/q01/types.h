#ifndef ARRAY_H_
#define ARRAY_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct {

    float coordinate[1][2];

} Point;

typedef struct {
    
    Point points[3];


} Triangle;

#endif
