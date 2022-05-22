#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;

    {
        printf("Lutfen Bir sayi giriniz !\n");
        scanf("%d",&a);

        printf("Lutfen Bir sayi daha giriniz !\n");
        scanf("%d",&b);

        printf("Lutfen Bir sayi daha giriniz !\n");
        scanf("%d",&c);

        printf("Lutfen Bir sayi daha giriniz !\n");
        scanf("%d",&d);

        printf("Girilen sayilarin toplami = %d\n",a+b+c+d);
        return 0;
    }
}
