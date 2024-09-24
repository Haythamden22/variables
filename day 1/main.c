#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[100], prenom[100];
    int age;
    char sexe[100],email[100];
    printf("entrer nom :\n");
    scanf("%s",&nom);
    printf("entrer prenom :\n");
    scanf("%s",&prenom);
    printf("age :\n");
    scanf("%d",&age);
    printf("sexe : \n");
    scanf("%s",&sexe);
    printf("email :\n");
    scanf("%s",&email);
    printf("nom:%s\nprenom:%s\n",nom,prenom);
    printf("sexe :%s\n",sexe);
    printf("email :%s",email);
    return 0;
}
