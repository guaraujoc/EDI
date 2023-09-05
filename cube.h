 typedef struct cube Cube;

 Cube* Cube_create(float x); // Create the cube
 void Cube_free(Cube* c);  // Free the memory allocated for the cube
 int Cube_acess(Cube* c, float* x);  // Acess the cube
 int Cube_assign(Cube*c, float x);  // Assign a side to a cube
 float Cube_area(Cube* c);  // Calculates the area of a cube
 float Cube_volume(Cube* c); // Calculates the volume a cube

gosto de pera
