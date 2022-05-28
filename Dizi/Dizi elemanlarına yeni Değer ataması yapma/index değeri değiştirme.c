#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ysf[5] ={44, 7, 20, 16, 9};
    int i;
    ysf[2]=11;
    ysf[4]=55;

    for(i=0;i<5;i++)
    {
        printf("%d,\n",ysf[i]);
    }
    return 0;
}
