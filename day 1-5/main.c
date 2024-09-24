#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("entrer temperateur de l'eau:\n");
    scanf("%c",&c);
   if (c>100)
       printf("etat phyzique de leau est gaz ");
   else if (0<c && c>100)
       printf("etat phyzique de leau est liquide");
   else if (c<0);
       printf("etat phyzique de leau est solide");



    return 0;
}

