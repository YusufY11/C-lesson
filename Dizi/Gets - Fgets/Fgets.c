#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[39];
    printf("Lutfen isminizi giriniz\n");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);

return 0;
}
