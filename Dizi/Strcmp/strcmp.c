#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // KARAKTER D�Z�LER�N� ASC�� TABLOSUNDAK� YERLER�NE GORE KIYASLAYIP BUYUK OLANI (1) KUCUK OLANI (-1) E��T �SE (0) D�ND�R�R

    int sonuc;
    char ysf[15]="abcDEF";
    char myy[15]="abCDEF";

    sonuc=strcmp(ysf,myy);

    printf("%d",sonuc);

    if(sonuc<0)
    {
        printf("\nYsf Myy den daha kucuktur");
    }
    else if(sonuc>0)
    {
        printf("\nYsf Myy den daha buyuktur");
    }
    else
    {
        printf("\nIkiside esittir");
    }
    return 0;
}
