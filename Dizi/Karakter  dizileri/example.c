#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* \0 = Null */

    char ysf[]={'y','u','s','u','f','\0'};

    char dizim[]="yusuf";
    char kullanici[3];

    printf("%s\n%s\n",ysf,dizim);

    printf("Lutfen bir karakter dizisi giriniz\n");
    scanf("%s",&kullanici);
    printf("%s",kullanici);

    return 0;
}
