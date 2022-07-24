 #include <stdio.h>
 #include <stdlib.h>

void tekmiciftmi(int ysf)
{
    if(ysf%2==0)
    {
        printf("Sayiniz Ciftir");
    }
    else
    {
        printf("Sayiniz Tektir");
    }
}

    int main()
 {
    int sayi;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    tekmiciftmi(sayi);

    return 0;
 }
