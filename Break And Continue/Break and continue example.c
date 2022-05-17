#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=2;i<14;i++)
    {
        if(i==4)
        {
            continue;
        }
        if(i==12)
        {
            break;
        }
        printf("%d\n",i);
    }
}
