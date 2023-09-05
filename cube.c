#include <stdio.h>
#include <stdlib.h>
#include "cube.h"

struct cube {

    float x;

};

 Cube* Cube_create(float x){ // Create the cube

     Cube* c = (Cube*) malloc(sizeof(Cube));

     if(c != NULL){

         c->x = x;

    }

    return c;

 }

 void Cube_free(Cube* c){  // Free the memory allocated for the cube

     free(c);

 }

 int Cube_acess(Cube* c, float* x){  // Acess the cube

     if(c == NULL)
         return 0;  // Error, this cube doesn't exists

    // Makes the acess to the cube
    *x = c->x;

    return 1; // Sucess
 }

 int Cube_assign(Cube* c, float x){  // Assign a side to a cube

     if(c = NULL)
         return 0;  // Error, the cube doesn't exists

    // Assign a side to the cube

    c->x = x;

    return 1;

 }

 float Cube_area(Cube* c){  // Calculates the area of a cube

        if(c == NULL)
            return 0; // Error, the cube doesn't exists

        // Calculates the cube area
       float area = 6 * c->x * c->x;

       return area;

 }

float Cube_volume(Cube* c){ // Calculates the volume of a cube

    if(c == NULL)
        return 1; // Error, the cube doesn't exists

    float volume = c->x * c->x * c->x; // Calculates the cube's volume

    return volume;
}
