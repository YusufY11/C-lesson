#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ysf[100];

    printf("Bir text giriniz\n");
    // scanf("%s",&ysf);
    fgets(ysf,sizeof(ysf),stdin);

    printf("Girdiginiz text = %s\n",ysf);
    printf("Girdiginiz text in kucuk hali %s\n",strlwr(ysf));
    return 0;
}
