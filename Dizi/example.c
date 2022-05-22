#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ysf[10];
    int i;
    for(i=0;i<10;i++)
    {
        ysf[i]=2*i;
    }
        for(i=0;i<10;i++)
    {
        printf("%d\n",ysf[i]);
    }
    return 0;
}
