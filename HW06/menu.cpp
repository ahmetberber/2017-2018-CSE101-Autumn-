#include <stdio.h>
int main ()
{
	int giris,s,k,sayi,yildiz,bosluk,copy_sayi;
	while(giris>=0)
	{
		printf("--- MENU ---\n");
		printf("1. yildizlardan elmas ciz: \n");
		printf("2. ogrenci bilgisini goster: \n");
		printf("0. cikis: \n");
		printf("seceneginiz:\n");
		scanf("%d",&giris);
			if(giris !=2 && giris !=1 && giris !=0)
			{
				printf("hatali tuslama yaptiniz!!\n");
				giris=99; /*burada secilen menuden cýkmak icin girise rastgele bir deger atadým.*/
			}
			else if(giris == 1)
			{
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
				giris=99; /*burada secilen menuden cýkmak icin girise rastgele bir deger atadým.*/
			}
			else if(giris == 2)
			{
				printf("Ad: <Ahmet Hilmi>\n");
				printf("Soyad: <Berber>\n");
				printf("Ogrenci No: <171044027>\n");
				giris=99; /*burada secilen menuden cýkmak icin girise rastgele bir deger atadým.*/
			}
			else if(giris == 0)
			{
				break;
			}
	}
	return 0;
}
