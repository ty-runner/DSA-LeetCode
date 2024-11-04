#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "Point.h"

float randFloat(){
    return 1.0*rand()/RAND_MAX;
}

int main(int argc, char * argv[]){
    float dist = atof(argv[2]);
    int point_increment, pair_increment, num_points = atoi(argv[1]), num_pairs = 0;
    point *array = malloc(num_points * sizeof(*array));
    for(point_increment = 0; point_increment < num_points; point_increment++){
        array[point_increment].x = randFloat(); array[point_increment].y = randFloat();
    }
    for(point_increment = 0; point_increment < num_points; point_increment++){
        for(pair_increment = point_increment+1; pair_increment < num_points; pair_increment++){
            if(distance(array[point_increment], array[pair_increment]) < dist) num_pairs++;
        }
    }
    printf("%d edges shorter than %f\n", num_pairs, dist);
    free(array);
}