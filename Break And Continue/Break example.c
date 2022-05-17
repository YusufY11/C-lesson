#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0;i<15;i++)
    {
        if(i==12)
        {
            break;
        }
        printf("%d\n",i);
    }
}
