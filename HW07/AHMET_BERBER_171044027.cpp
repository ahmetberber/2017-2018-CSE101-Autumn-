#include<stdio.h>

int tambolentop(int sayi);

int main()
{
	int sayi1,sayi2;
	printf("arkadasini bulmak istediginiz sayi: ");
	scanf("%d",&sayi1);
	sayi2 = tambolentop(sayi1);
	if(tambolentop(sayi2) == sayi1)
	{
		printf("%d sayisinin arkadas sayisi %d sayisidir.",sayi1,sayi2);
	}
	else
	{
		printf("%d sayisinin arkadas sayisi yoktur.",sayi1);
	}
	return 0;
}

int tambolentop(int sayi)
{	
	int i,toplam=0;
    for(i = 1; i < sayi; i++)
		{
      	if (sayi % i == 0)
  		{
        toplam += i;
		}
		}
		sayi = toplam;
}

