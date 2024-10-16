#include <stdio.h>
#define M_PI 3.14159265358979323846

int main(void)
{
  double volume;
  int radius;

  printf("Enter Radius");
  scanf("%d", &radius);

  volume = (4.0f / 3.0f) * M_PI * radius * radius * radius;

  printf("\nvolume = %f", volume);

  return 0;
}
