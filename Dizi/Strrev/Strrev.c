#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ysf[100];

    printf("Bir metin giriniz\n");
    scanf("%s",&ysf);

    printf("Girdiginiz ifade %s\n",ysf);
    printf("Girdiginiz ifadenin tersi %s\n",strrev(ysf));

    return 0;
}
