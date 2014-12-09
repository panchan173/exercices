#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    int tableau[3] = {0,0,0}, result=0;
    int le_plus_grand=-1, i;

    printf("Entier A: ");scanf("%d",&tableau[0]);
    printf("Entier B: ");scanf("%d",&tableau[1]);
    printf("Entier C: ");scanf("%d",&tableau[2]);

    for (i=0; i<3; i++)
        le_plus_grand = (tableau[i]>le_plus_grand) ? tableau[i]:le_plus_grand;

    printf("le plus grand est: %d\n", le_plus_grand);

    return 0;
}


