#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2,z1,z2,distance;
    printf("x1 :\n");
    scanf("%f",&x1);
    printf("x2:\n");
    scanf("%f",&x2);
    printf("y1:\n");
    scanf("%f",&y1);
    printf("y2:\n");
    scanf("%f",&y2);
    printf("z1:\n");
    scanf("%f",&z1);
    printf("z2:\n");
    scanf("%f",&z2);
    distance = sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0)+pow(z2-z1,2.0));
    printf("distance = %f",distance);

    return 0;
}
