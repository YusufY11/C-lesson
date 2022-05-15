#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Lutfen ilk sayiyi giriniz\n");
    scanf("%d",&a);
    printf("Lutfen ikinci sayiyi giriniz\n");
    scanf("%d",&b);

    if(a%2==1)
    {
        if(b%2==1)
        {
            printf("Iki sayimda tektir");
        }
        else
        {
            printf("Ilk sayim tek ikinci sayim ciftir");
        }
    }
    else /*(a%2==2)*/
    {
        if(b%2==1)
        {
            printf("Ilk sayim cift ikinci sayim tek.");
        }
        else
        {
            printf("Iki sayimda ciftir.");
        }
    }
}
