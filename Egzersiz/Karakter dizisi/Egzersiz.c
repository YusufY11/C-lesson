#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()       /* elde etmemiz gereken cýktý  bonsoire */
{
    char dizi1[]="bonne";
    char dizi2[]="soiree";
    char sonuc[55]="";

    strcpy(sonuc,dizi1);
    strncpy(sonuc+3,dizi2,5);

    printf("%s",sonuc);

    return 0;
}
