#include <stdio.h>
#include <stdlib.h>


int main()
{
    int days=7;
    switch(days)
    {
        case 1:printf("Pazartesi");
        break;
        case 2:printf("Salý");
        break;
        case 3:printf("Carsamba");
        break;
        case 4:printf("Persembe");
        break;
        case 5:printf("Cuma");
        break;
        case 6:printf("Cumartesi");
        break;
        case 7:printf("Pazar");
        break;
        default :printf("Gecersiz gun");
        break;
    }
    return 0;
    /*
    if(days==1)
    {
        printf("Pazartesi");
    }
    else if(days==2)
    {
        printf("Sali");
    }
    else if(days==3)
    {
        printf("Carsamba");
    }
    else if(days==4)
    {
        printf("Persembe");
    }
    else if(days==5)
    {
        printf("Cuma");
    }
    else if(days==6)
    {
        printf("Cumartesi");
    }
    else if(days==7)
    {
        printf("Pazar");
    }
    else
    {
        printf("Gecersiz gun");
    }
    return 0;
    */
}
