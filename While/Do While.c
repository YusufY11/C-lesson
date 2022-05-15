#include <stdio.h>
#include <stdlib.h>

int main()
{
    int banana =10;
    do
    {
        printf("I Have %d Bananas <3\n",banana);
        banana=banana-1;
    }while(banana>0);

    printf("I dont have any bananas _-_");

    return 0;
}
