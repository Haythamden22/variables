#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float m_g;
    printf("entrer a");
    scanf("%d",&a);
    printf("entrer b");
    scanf("%d",&b);
    printf("entrer c");
    scanf("%d",&c);
    m_g = pow(a * b * c, 1.0 / 3.0);
    printf("m_g est : %f",m_g);
    return 0;
}
