#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=5;i<15;i++)
    {
        if(i==12)
        {
            continue;
        }
        printf("%d\n",i);
    }
}
