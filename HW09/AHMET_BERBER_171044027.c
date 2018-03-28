#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	srand(time(NULL)); /*HER DEFASINDA RANDOM ALMA KOMUTU*/
	
	int r,i,counter1=0,counter2=0,array1[20],array2[20],array3[20];
	double result1=0,result2=0,result3=0; /* SON ��LEMDE GEREKL� OLACAK DE��SKENLER� TAN�MLAD�M*/
	printf("v1: ");
	for(i=0;i<20;i++)
	{
		r=rand() % 10; /*10 A G�RE MODUNU ALDIM ��NK� RANDOM SAYILAR 1 �LE 10 ARASINDA OLACAK*/
		array1[i]=r;
		printf("%i, ",array1[i]); /*�LK D�Z�N�N ���N� FOR D�NG�S� �LE RANDOM SAYILARLA DOLDURDUM*/
	}
	
	printf("\n");
	
	printf("v2: ");
	for(i=0;i<20;i++)
	{
		r=rand() % 10; /*10 A G�RE MODUNU ALDIM ��NK� RANDOM SAYILAR 1 �LE 10 ARASINDA OLACAK*/
		array2[i]=r;
		printf("%i, ",array2[i]); /*�K�NC� D�Z�N�N ���N� FOR D�NG�S� �LE RANDOM SAYILARLA DOLDURDUM*/
	}
	
	printf("\n\n");
	
	printf("v1 L0 norm: "); 
	for(i=0;i<20;i++)
	{
		if(array1[i] != 0) /*E�ER �LK ARRAYDE ELEMANLAR 0 A E��T DE��LSE*/
		{
			counter1++; /*COUNTER I 1 ARTTIRDIM*/
		}
	}
	printf("%d ",counter1); /*VE BASTIM*/
	
	printf("\n");
	
	printf("v2 L0 norm: ");
	for(i=0;i<20;i++)
	{
		if(array2[i] != 0) /*E�ER �K�NC� ARRAYDE ELEMANLAR 0 A E��T DE��LSE*/
		{
			counter2++; /*COUNTER I 1 ARTTIRDIM*/
		}
	}
	printf("%d ",counter2); /*VE BASTIM*/
	
	printf("\n\n");
	
	printf("v1 + v2 = ");
	for(i=0;i<20;i++)
	{
		array3[i] = array2[i] + array1[i]; /*�LK VE �K�NC� ARRAYIN HER B�R ELEMANINI 3. B�R ARRAYE ATADIM*/
		printf("%d, ",array3[i]); /*VE BASTIRDIM*/
	}
	
	for(i=0;i<20;i++)
	{
		result1+=array1[i]*array1[i]; /*�LK ARRAY�N ELEMANLARININ KARELER� TOPLAMI*/
	}

	for(i=0;i<20;i++)
	{
		result2+=array2[i]*array2[i]; /*�K�NC� ARRAY�N ELEMANLARININ KARELER� TOPLAMI*/
	}

	for(i=0;i<20;i++)
	{
		result3+=array1[i]*array2[i]; /*1. VE 2. ARRAYLER�N DOT PRODUCT U*/
	}
	
	printf("\n\n");
	
	printf("sim(v1,v2) = %f", result3 / (pow(result1,0.5)*pow(result2,0.5))); /*1. VE 2. ARRAY�N HER B�R ELEMANININ KARELER�N�N TOPLAMININ KAREK�K�N� POW FONKS�YONU �LE ALDIM VE SON ��LEM� YAPTIM*/
	
	return 0;
}
