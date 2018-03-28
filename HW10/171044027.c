#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int randomnum(int randarray[]);
int control(int randarray[], int size,int arr[]);
int eatenchoc(int arr[]);
void whowin(int arr[]);

int main()
{
	srand(time(NULL));
	
	int arr[2],randarray[6],i; /* burada arr[2] tan�mlad�m ��nk� control fonksiyonundan sonra Mehmet ve Ayse'nin yedi�i 2 de�eri return etmem gerekiyordu. O degerleri de fonksiyonun sonunda arrayin i�ine atad�m. */
  	
  	randomnum(randarray);
  	for(i=0;i<6;i++) /* randomnum fonksiyonunda al�nan de�erleri burada randarray arrayine bast�rd�m */
	{
		printf("%d ",randarray[i]); 
	}
	printf("\n");
  	control(randarray,6,arr);
  	eatenchoc(arr);
	whowin(arr);

  	return 0;
}

/* control fonksiyonundaki parametreler:
leftside = Ayse'nin soldan yemeye baslad��� index yani arrayin ilk eleman�
rightside = Mehmet'in sa�dan yemeye baslad��� index yani arrayin son eleman�
counterAyse = Ayse'nin yedi�i �ikolatalar� tutan parametre
counterMehmet = Mehmet'in yedi�i �ikolatalar� tutan parametre
LenghtMehmet = Mehmet'in yemesi gereken �ikolata uzunlu�u 
LenghtAyse = Ayse'nin yemesi gereken �ikolata uzunlu�u 
fonksiyondaki ana mant�k Ayse soldan baslad��� i�in son indexteki de�eri al�p sonra iki kat�n� al�p Mehmet'in yemesi gereken uzunlu�a atamak.
Ard�ndan Mehmet'in yemesi gereken uzunlu�u da arrayin bas�ndan itibaren olan degerlerden ��kartmak. */
 
int control(int randarray[], int size,int arr[])
{
  	int leftside=0, rightside=size-1,counterAyse=0,counterMehmet=0,lengthAyse=0,lengthMehmet=0,i; 

  	while(leftside <= rightside) 
  	{
  		
		if (leftside == rightside) /*eger ortada bir �ikolata kal�rsa Mehmet al�r */
  		{
  			counterMehmet++;
  			break;
  		}

		lengthAyse=randarray[rightside];
		lengthMehmet= (lengthAyse*2)-lengthMehmet; /* burda Ayse'nin ald��� �ikolatan�n iki kat�n� Mehmet'in uzunlugundan ��kartt�m ��nk� �nceki islemde Mehmet'in
		yemesi gereken uzunluk geldi�i index teki de�erden k���k oldu�u zaman o de�eri de burda silip direk sonraki indexe ge�mesini sa�lad�m. */

    	for(i=leftside;i<rightside;i++)
		{
			if(randarray[i]<=lengthMehmet) 
			{
				lengthMehmet-=randarray[i]; 
			 	counterMehmet++;
				leftside=i+1;
			}
			else 
			{
				lengthMehmet=-lengthMehmet;
				break;
			}
		}   
   	counterAyse++; 
  	rightside--; 
  	}

  	arr[0]=counterMehmet; 
  	arr[1]=counterAyse;
}
/* randomnum fonksiyonu ile 6 boyutlu arraya 1 ile 11 aras�nda rasgele deger atad�m */
int randomnum(int randarray[])
{
	int i;
	for(i=0;i<6;i++)
	{
		int r = rand() % 11 + 1; 
		randarray[i] = r; 
	}
}
/* eatenchoc fonksiyonunda ise Ayse ve Mehmet'in yedi�i �ikolatalari bastr�d�m */
int eatenchoc(int arr[])
{
	printf("Mehmetin yedigi cikolata sayisi = %d\n",arr[0]);
	printf("Aysenin yedigi cikolata sayisi = %d\n",arr[1]);
}
/* whowin fonksiyonunda ise kimin kazand�g�n� bast�rd�m. */
void whowin(int arr[])
{
	if (arr[0] > arr[1])
	{
		printf("KAZANAN MEHMET \n");
	}
	else if (arr[0] < arr[1])
	{
		printf("KAZANAN AYSE \n");	
	}
	else
	{
		printf("BERABERE \n");  
	}
}
