#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    int a=0;
    printf("Entier : ");scanf("%d",&a);

    //ecriture longue
    if (a%2)
    {
        printf("le nombre est impair\n");
    }
    else
    {
        printf("le nombre est pair\n");
    }
    // accolade facultative car une seule expression
    if (a%2)
        printf("le nombre est impair\n");
    else
        printf("le nombre est pair\n");
    //expression ternaire
    (a%2) ? printf("le nombre est impair\n"):printf("le nombre est pair\n");

    return 0;
}


