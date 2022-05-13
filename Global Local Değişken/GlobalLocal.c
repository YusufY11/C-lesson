#include <stdio.h>
#include <stdlib.h>




int main()
{
    int x=1;

    {
        int x=3;
        printf("%d\n",x);
    }
    printf("%d",x);
    return  0;
}
