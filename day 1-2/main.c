#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,c;
    printf("entrer le temperature c :\n");
    scanf("%f",&c);
    k = c + 273.15;
    printf("temperature en k:%f\n",k);

    return 0;
}
