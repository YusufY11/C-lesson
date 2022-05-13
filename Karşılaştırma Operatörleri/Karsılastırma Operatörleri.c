#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    ==
    !=
    <
    >
    >=
    <=
    */
    int a;
    printf("Lutfen bir deger giriniz\n");
    scanf("%d",&a);

    if(a<4)
        {
        printf("Programa mantigini anliyorum.");
        return 0;
        }
    if(a>4)
    {
        printf("Yapiyoruz bu sporu");
        return 0;
    }
    if(a==4)
    {
        printf("ARE YOU BIG PLAYER ?");
        return 0;
    }
}
