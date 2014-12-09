#include <stdio.h>
#include <stdlib.h>

#define NB_INDICE 3

void  affiche_matrice(int mat[NB_INDICE][NB_INDICE])
{
    int ligne,colone;
    for (ligne=0; ligne<NB_INDICE; ligne++)
    {
        for (colone=0; colone<NB_INDICE; colone++)
        {
            (colone==NB_INDICE-1) ? printf("%d\n",mat[ligne][colone]) : printf("%d | ",mat[ligne][colone]);
        }
    }
}

int main(int argc, char *argv[]) // Équivalent de int main()
{
    int matrice[NB_INDICE][NB_INDICE]={
                                       {1,2,3},
                                       {4,5,6},
                                       {7,8,9}
                                      };

    affiche_matrice(matrice);
    return 0;
}



