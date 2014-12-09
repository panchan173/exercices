#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    // declare eniter i et pointeur d'entier p
    int i;
    int* p=NULL;

    //init i et pointeur pointe sur i
    i=12;
    p=&i;

    //print i
    printf("valeur: %d\n", i);

    //change i par le pointeur
    *p=10;

    //print i
    printf("valeur: %d\n", i);


    return 0;
}


