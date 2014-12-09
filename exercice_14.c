#include <stdio.h>
#include <stdlib.h>

#define NB_MOIS 12

void affiche(int* an)
{
    int i=0;
    for (i=0; i<NB_MOIS-1;i++)
    {
        printf("%d, ", *(an+i));
    }
     printf("%d\n", *(an+i));
}



void initialise(int* mois)
{
    int i=0;
    //printf("adresse: %p\n", mois);

    for (i=0;i<NB_MOIS; i++)
    {
        if (i+1==2)
        {
            *(mois+i)=28;
        }
        else if ((((i+1)%2==0) && ((i+1)<7)) || (((i+1)%2) && ((i+1)>7)))
        {
            *(mois+i)=30;
        }
        else
        {
            *(mois+i)=31;
        }
    }

}



int main(int argc, char *argv[]) // Équivalent de int main()
{
    int mois[NB_MOIS]={0};

    initialise(mois);
    affiche(mois);

    return 0;
}
