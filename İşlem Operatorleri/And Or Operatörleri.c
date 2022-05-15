#include <stdio.h>
#include <stdlib.h>

/*  &&   || */

int main()
{
    int yas;
    int numero;

    printf("Lutfen yasinizi girin\n");
    scanf("%d",&yas);
    printf("Lutfen ugurlu sayinizi girin\n");
    scanf("%d",&numero);

    if(((yas>=18) && (yas<=40)) ||(numero ==11))
    {
        printf("Bir ihtimal daha var O da olmek mi dersin?\n");
    }
    else
    {
        printf("Sen Zavallisin,Yikiksin,Bitmissin\n");
    }

    return  0;
}
