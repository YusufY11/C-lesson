#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int sayilarim[3];
	int i;

	for(i=0;i<3;i++)
	{
	    printf("Bir sayi giriniz\n");
		scanf("%d",&sayilarim[i]);
	}
	for(i=0;i<3;i++)
    {
        printf("%d\n",sayilarim[i]);
    }

	return	0;
}
