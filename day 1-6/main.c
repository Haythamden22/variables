#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("etat de leau:\n");
    scanf("%f",&c);
    if (c<0)
        printf("solide");
    else if (c>100)
        printf("gaz");
    else
        printf("liquide");

    return 0;
}
