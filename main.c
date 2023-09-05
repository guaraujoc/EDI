#include "cube.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  float area, volume;

  Cube *c1 = Cube_create(2);

  area = Cube_area(c1);
  volume = Cube_volume(c1);

  printf("The cube has %.2f cm² of area and %.2f cm³ of volume.\n", area,
         volume);

  Cube_free(c1);

  return 0;
}
