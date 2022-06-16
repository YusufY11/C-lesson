#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // N karakter kadar kopyalama iþlemi
    char ysf[]="Benim adim Tufus";
    char myy[100];

    strncpy(myy,ysf,11);

    printf("%s",myy);


    return 0;
}
