#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    int a, b;
    char operateur;
    printf("a +,-,*,\\,%% b: ");scanf("%d %c %d",&a, &operateur, &b);

    switch (operateur)
    {
        case '+':
            printf("result: %d\n", a+b);
            break;
        case '-':
            printf("result: %d\n", a-b);
            break;
        case '*':
            printf("result: %d\n", a*b);
            break;
        case '\\':
            if (a%b)
            {
                printf("result: %d//%d\n",a,b);
            }
            else
            {
                printf("result: %d\n", a/b);
            }
            break;
        case '%':
            printf("result: %d\n", a%b);
            break;

    }
    return 0;
}


