#include <stdio.h>
#include <stdlib.h>

/* Kullanýcýdan 2 adet 3 e 2 lik matris deðerlerini alýnýz bunlarý 3 boyutlu sayi dizisine
atayýnýz hangi indexte hangi deger var bunlarý consola bastiriniz */

int main()
{
    int ysf[2][3][2];
    int i,j,k;

    printf("Lutfen 12 Adet deger giriniz\n");

    for(i=0;i<2;i++)
    {

        for(j=0;j<3;j++)
        {

            for(k=0;k<2;k++)
            {
                scanf("%d",&ysf[i][j][k]);
            }
        }
    }

    printf("Degerleriniz\n");
    for(i=0;i<2;i++)
    {

        for(j=0;j<3;j++)
        {

            for(k=0;k<2;k++)
            {
            /* printf("%4d",ysf[i][j][k]); */

               printf("[%d][%d][%d]  = %d\n",i,j,k,ysf[i][j][k]);
            }
         /* printf("\n");*/
        }
    }


return 0;
}
