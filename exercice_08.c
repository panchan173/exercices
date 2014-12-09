#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    int a, b, grand, petit, quotient=0, reste=0;
    printf("Entier A: ");scanf("%d",&a);
    printf("Entier B: ");scanf("%d",&b);

    if (a>b)
        {grand=a;petit=b;}
    else
        {grand=b;petit=a;}

    while (grand>=petit)
    {
        quotient++;
        reste=grand-petit;
        grand=grand-petit;
    }

    printf("Quotient: %d, reste: %d\n", quotient, reste);
    printf("Verification, (quotient(%d)*diviseur(%d)=%d)+reste(%d)=%d\n",quotient, petit, quotient*petit, reste, quotient*petit+reste);


    return 0;
}


