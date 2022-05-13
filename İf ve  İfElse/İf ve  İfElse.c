#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Sayi Giriniz\n");
    scanf("%d",&a);

    if(a>=0)
    {
        printf("Sayi Pozitif");
    }
    if(a<0)
    {
        printf("Sayi Negatif");
    }
    return 0;
}
