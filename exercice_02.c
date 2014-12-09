#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    //a) echange de 2 variables
    int a=0, b=0, c=0;
    printf("Entier A: ");scanf("%d",&a);
    printf("Entier B: ");scanf("%d",&b);
    printf("a:%d , b: %d\n", a, b);
    c=a;
    a=b;
    b=c;
    printf("a:%d , b: %d\n", a, b);



    return 0;
}


