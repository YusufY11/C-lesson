#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int sonuc;
    char ysf[15]="abcDEF";
    char myy[15]="abCDEF";

    sonuc=strncmp(ysf,myy,2);


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
