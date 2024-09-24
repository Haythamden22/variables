#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,H,J,K,L;
    printf("entrer a\n");
    scanf("%f",&a);
    printf("entrer b\n");
    scanf("%f",&b);
    H=a+b;
    printf("H=%.1f\n",H);
    J=a-b;
    printf("J=%.1f\n",J);
    K=a/b;
    printf("K=%.1f\n",K);
    L=a*b;
    printf("L=%.1f\n",L);


    return 0;
}
