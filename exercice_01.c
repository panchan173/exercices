#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    //a) produit de 2 entiers
    int a=0, b=0;
    printf("Entier A: ");scanf("%d",&a);
    printf("Entier B: ");scanf("%d",&b);
    printf("Le produit %d * %d = %d\n", a, b, (a*b));

    //b) produit de 2 réels
    float c=0, d=0;
    printf("Entier A: ");scanf("%f",&c);
    printf("Entier B: ");scanf("%f",&d);
    printf("Le produit %f * %f = %f\n", c, d, (c*d));

    return 0;
}


