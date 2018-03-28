#include <stdio.h>
int main(){
	int s,k,sayi,yildiz, bosluk,copy_sayi;
	printf("sayi girin:");
	scanf("%d",&sayi);
	copy_sayi=sayi;
	sayi = (sayi+1)/2;
	yildiz=1;
	bosluk=sayi-1;
	for(k=0;k<sayi;k++)
	{
		for(s=0;s<bosluk;s++)
		{
			printf(" ");
		}
		for(s=0;s<yildiz;s++)
		{
			printf("*");
		}
	printf("\n");
	bosluk--;
	yildiz+=2;
	}
	sayi = (copy_sayi-1)/2;
	yildiz-=4;
	bosluk=1;
	for(k=0;k<sayi;k++)
	{
		for(s=0;s<bosluk;s++)
		{
			printf(" ");
		}
		for(s=0;s<yildiz;s++)
		{
			printf("*");
		}
	printf("\n");
	bosluk++;
	yildiz-=2;
	}

	return 0;
	}
