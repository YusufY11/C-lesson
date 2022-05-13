#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamsayi;
    char karakter;
    float ondaliksayi1;
    double  ondaliksayi2;

    printf("char bellekte %d byte kadar yer tutar\n",sizeof(char));
    printf("int bellekte %d byte kadar yer tutar\n",sizeof(int));
    printf("float bellekte %d byte kadar yer tutar\n",sizeof(float));
    printf("double bellekte %d byte kadar yer tutar",sizeof(double));
    return 0;
}
