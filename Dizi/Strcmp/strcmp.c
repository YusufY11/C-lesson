#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // KARAKTER DÝZÝLERÝNÝ ASCÝÝ TABLOSUNDAKÝ YERLERÝNE GORE KIYASLAYIP BUYUK OLANI (1) KUCUK OLANI (-1) EÞÝT ÝSE (0) DÖNDÜRÜR

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
