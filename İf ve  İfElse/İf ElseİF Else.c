#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int b;

    printf("Bir deger giriniz !\n");
    scanf("%d",&b);

    if(a<b)
    {
        printf("Try Lower \n");
    }
    else if(a>b)
    {
        printf("Try Higher\n");
    }
    else if(a==b)
    {
        printf("Boooom Correct Answer my G! \n");
    }
    else
    {
        printf("Sen Kendini Deli Gibi Yaptin\n");
    }
    return 0;
}
