#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ysf[100]="C dilini ogreniyorum";
    char *sub;
    sub=strstr(ysf,"dil"); /* parantez i�erisinde belirtilen anahtar kelimeyi (dil) arat�p devam�yla beraber belirtilen (sub) string ine atar*/
    printf("\nArama sonrasi yeni string: %s",sub);

    return 0;
}
