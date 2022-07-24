#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi[11][11]={"bir","iki","uc","dort","bes"};

    printf("Dizimin dorduncu elamani %s\n",dizi[3]);
    printf("Dizimin dorduncu elamaninin ucuncu karakteri %c",dizi[3][2]);

    return 0;
}
