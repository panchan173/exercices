#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    int le_plus_grand=-1, le_plus_petit, nb=0;

    printf("Entier : ");scanf("%d",&nb);
    le_plus_grand=nb;le_plus_petit=nb;

    while(nb)
    {
        le_plus_grand = (nb>le_plus_grand) ? nb:le_plus_grand;
        le_plus_petit = (nb<le_plus_petit) ? nb:le_plus_petit;
        printf("Entier : ");scanf("%d",&nb);
    }
    printf("le plus grand est: %d\n", le_plus_grand);
    printf("le plus petit est: %d\n", le_plus_petit);

    return 0;
}
