#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char bos[50];

    strcpy(bos,"Benim");  //Strcpy ile benim i bos un i�ine atad�m  aktard�m

    strcat(bos," adim");  //Strcat ile adim i bos ile birle�tirdim
    strcat(bos," Tufus");   //Ayn� �ekilde tufus u bos un �c�ne ekledim birle�tirdim

    printf("%s",bos);

    return 0;
}
