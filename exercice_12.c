#include <stdio.h>
#include <stdlib.h>

#define TABLE_MAX 10

int main(int argc, char *argv[]) // Équivalent de int main()
{
    int tab[TABLE_MAX]={2,3,0,4,6,7,0,4,0,7};
    int i;

    for (i=0; i<TABLE_MAX; i++)
    {
        if (tab[i]==0) printf("index: %d\n", i);
    }
    return 0;
}


