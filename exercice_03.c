#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    //a) donner les codes des char
    char vChar;

    for (vChar='A'; vChar<='Z'; vChar++)
    {
        printf("Char: %c, Code: %d, Hexa: %x\n", vChar, vChar, vChar);
    }
    for (vChar='0'; vChar<='9'; vChar++)
    {
        printf("Char: %c, Code: %d, Hexa: %x\n", vChar, vChar, vChar);
    }


    return 0;
}


