#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char bos[50];

    strcpy(bos,"Benim");  //Strcpy ile benim i bos un içine atadým  aktardým

    strcat(bos," adim");  //Strcat ile adim i bos ile birleþtirdim
    strcat(bos," Tufus");   //Ayný þekilde tufus u bos un ýcýne ekledim birleþtirdim

    printf("%s",bos);

    return 0;
}
