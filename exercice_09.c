#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    int a, b, result=0;
    printf("Entier A: ");scanf("%d",&a);
    printf("Entier B: ");scanf("%d",&b);

    while (b>0)
    {
        if (b%2)
        {
            a=a;
            b=b-1;
            result+=a;
        }
        else
        {
            a=2*a;
            b=b/2;
        }
        printf("A: %d, B: %d; Result: %d\n", a, b, result);
    }
    return 0;
}
