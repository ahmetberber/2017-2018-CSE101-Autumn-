#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	srand(time(NULL)); /*HER DEFASINDA RANDOM ALMA KOMUTU*/
	
	int r,i,counter1=0,counter2=0,array1[20],array2[20],array3[20];
	double result1=0,result2=0,result3=0; /* SON ÝÞLEMDE GEREKLÝ OLACAK DEÐÝSKENLERÝ TANÝMLADÝM*/
	printf("v1: ");
	for(i=0;i<20;i++)
	{
		r=rand() % 10; /*10 A GÖRE MODUNU ALDIM ÇÜNKÜ RANDOM SAYILAR 1 ÝLE 10 ARASINDA OLACAK*/
		array1[i]=r;
		printf("%i, ",array1[i]); /*ÝLK DÝZÝNÝN ÝÇÝNÝ FOR DÖNGÜSÜ ÝLE RANDOM SAYILARLA DOLDURDUM*/
	}
	
	printf("\n");
	
	printf("v2: ");
	for(i=0;i<20;i++)
	{
		r=rand() % 10; /*10 A GÖRE MODUNU ALDIM ÇÜNKÜ RANDOM SAYILAR 1 ÝLE 10 ARASINDA OLACAK*/
		array2[i]=r;
		printf("%i, ",array2[i]); /*ÝKÝNCÝ DÝZÝNÝN ÝÇÝNÝ FOR DÖNGÜSÜ ÝLE RANDOM SAYILARLA DOLDURDUM*/
	}
	
	printf("\n\n");
	
	printf("v1 L0 norm: "); 
	for(i=0;i<20;i++)
	{
		if(array1[i] != 0) /*EÐER ÝLK ARRAYDE ELEMANLAR 0 A EÞÝT DEÐÝLSE*/
		{
			counter1++; /*COUNTER I 1 ARTTIRDIM*/
		}
	}
	printf("%d ",counter1); /*VE BASTIM*/
	
	printf("\n");
	
	printf("v2 L0 norm: ");
	for(i=0;i<20;i++)
	{
		if(array2[i] != 0) /*EÐER ÝKÝNCÝ ARRAYDE ELEMANLAR 0 A EÞÝT DEÐÝLSE*/
		{
			counter2++; /*COUNTER I 1 ARTTIRDIM*/
		}
	}
	printf("%d ",counter2); /*VE BASTIM*/
	
	printf("\n\n");
	
	printf("v1 + v2 = ");
	for(i=0;i<20;i++)
	{
		array3[i] = array2[i] + array1[i]; /*ÝLK VE ÝKÝNCÝ ARRAYIN HER BÝR ELEMANINI 3. BÝR ARRAYE ATADIM*/
		printf("%d, ",array3[i]); /*VE BASTIRDIM*/
	}
	
	for(i=0;i<20;i++)
	{
		result1+=array1[i]*array1[i]; /*ÝLK ARRAYÝN ELEMANLARININ KARELERÝ TOPLAMI*/
	}

	for(i=0;i<20;i++)
	{
		result2+=array2[i]*array2[i]; /*ÝKÝNCÝ ARRAYÝN ELEMANLARININ KARELERÝ TOPLAMI*/
	}

	for(i=0;i<20;i++)
	{
		result3+=array1[i]*array2[i]; /*1. VE 2. ARRAYLERÝN DOT PRODUCT U*/
	}
	
	printf("\n\n");
	
	printf("sim(v1,v2) = %f", result3 / (pow(result1,0.5)*pow(result2,0.5))); /*1. VE 2. ARRAYÝN HER BÝR ELEMANININ KARELERÝNÝN TOPLAMININ KAREKÖKÜNÜ POW FONKSÝYONU ÝLE ALDIM VE SON ÝÞLEMÝ YAPTIM*/
	
	return 0;
}
