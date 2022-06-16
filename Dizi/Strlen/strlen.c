#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char ysf[]="Haziran";

    printf("Karakter dizimizin boyu %d\n",strlen(ysf));
    printf("Karakter dizimizin boyu %d",sizeof(ysf));
    // Aradaki fark sizeof ile NULL karakterini sayiyor

    return 0;
}
