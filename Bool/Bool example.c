#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{


    int a;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&a);

    if(a>=10)
    {
        bool a=true;
        printf("%d True",a);
        return 0;
    }
    else
    {
        bool a=false;
        printf("%d False",a);
        return 0;
    }

}
