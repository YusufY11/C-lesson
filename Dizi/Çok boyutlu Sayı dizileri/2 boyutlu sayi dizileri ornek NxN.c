#include <stdio.h>
#include <stdlib.h>


/* N X N ELEMAN ÝÇEREN BÝR PROGRAM YAZINIZ. */

int main()
{
    int mat[10][10];
    int i,j;


    for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
            if(i==j)
            {
                mat[i][j]=1;
            }
            else
            {
                mat[i][j]=0;
            }
        }
    }
        for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
            printf("%3d",mat[i][j]);
        }
        printf("\n");

    }
    return 0;
}
