#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ysf[100];
    char myy[100];
    int a;

    printf("Lutfen bir yazi giriniz\n");
    scanf("%s",&ysf);
    printf("Eklemek istediginiz yazi giriniz\n");
    scanf("%s",&myy);
    printf("Birinci yazinin sonuna kac karakter eklemek istersin\n");
    scanf("%d",&a);

    printf("Birlestirmeden Once  %s\n",ysf);
    printf("Birlestirmeden Sonra  %s\n",strncat(ysf,myy,a));

    // Strncat ile strcat arasýndaki fark Kullanýcýdan alýnan rakam kadar (N kadar) karakter ekleniyor




    return 0;
}
