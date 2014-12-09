#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    int nb, i;
    printf("Entier : ");scanf("%d",&nb);
    printf("Les diviseurs sont: ");
    for (i=1; i<=nb; i++)
    {
        if (i==nb)
        {
            printf("%d\n",i);
        }
        else
        {
            if (nb%i==0) printf("%d, ",i);
        }

    }
    return 0;
}


