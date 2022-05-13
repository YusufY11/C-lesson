#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&a);
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&b);
    printf("Sayi bolum sonucu %.3f",(float)a/b);/* + - * / % */
}
