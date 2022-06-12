#include <stdio.h>
#include <stdlib.h>

/* NxP iki boyutlu sayi dizilerinin toplamý */

int main()
{
    int dizi1[3][4]={{1,2,3,4}, {1,6,7,8}, {9,2,1,2}};
    int dizi2[3][4]={{1,5,8,4}, {5,4,6,3}, {8,7,5,3}};
    int toplam[3][4];

    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }

        for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d",toplam[i][j]);
        }
        printf("\n");

    }

return 0;
}
