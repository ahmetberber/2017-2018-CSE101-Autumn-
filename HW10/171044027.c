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
	
	int arr[2],randarray[6],i; /* burada arr[2] tanýmladým çünkü control fonksiyonundan sonra Mehmet ve Ayse'nin yediði 2 deðeri return etmem gerekiyordu. O degerleri de fonksiyonun sonunda arrayin içine atadým. */
  	
  	randomnum(randarray);
  	for(i=0;i<6;i++) /* randomnum fonksiyonunda alýnan deðerleri burada randarray arrayine bastýrdým */
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
leftside = Ayse'nin soldan yemeye basladýðý index yani arrayin ilk elemaný
rightside = Mehmet'in saðdan yemeye basladýðý index yani arrayin son elemaný
counterAyse = Ayse'nin yediði çikolatalarý tutan parametre
counterMehmet = Mehmet'in yediði çikolatalarý tutan parametre
LenghtMehmet = Mehmet'in yemesi gereken çikolata uzunluðu 
LenghtAyse = Ayse'nin yemesi gereken çikolata uzunluðu 
fonksiyondaki ana mantýk Ayse soldan basladýðý için son indexteki deðeri alýp sonra iki katýný alýp Mehmet'in yemesi gereken uzunluða atamak.
Ardýndan Mehmet'in yemesi gereken uzunluðu da arrayin basýndan itibaren olan degerlerden çýkartmak. */
 
int control(int randarray[], int size,int arr[])
{
  	int leftside=0, rightside=size-1,counterAyse=0,counterMehmet=0,lengthAyse=0,lengthMehmet=0,i; 

  	while(leftside <= rightside) 
  	{
  		
		if (leftside == rightside) /*eger ortada bir çikolata kalýrsa Mehmet alýr */
  		{
  			counterMehmet++;
  			break;
  		}

		lengthAyse=randarray[rightside];
		lengthMehmet= (lengthAyse*2)-lengthMehmet; /* burda Ayse'nin aldýðý çikolatanýn iki katýný Mehmet'in uzunlugundan çýkarttým çünkü önceki islemde Mehmet'in
		yemesi gereken uzunluk geldiði index teki deðerden küçük olduðu zaman o deðeri de burda silip direk sonraki indexe geçmesini saðladým. */

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
/* randomnum fonksiyonu ile 6 boyutlu arraya 1 ile 11 arasýnda rasgele deger atadým */
int randomnum(int randarray[])
{
	int i;
	for(i=0;i<6;i++)
	{
		int r = rand() % 11 + 1; 
		randarray[i] = r; 
	}
}
/* eatenchoc fonksiyonunda ise Ayse ve Mehmet'in yediði çikolatalari bastrýdým */
int eatenchoc(int arr[])
{
	printf("Mehmetin yedigi cikolata sayisi = %d\n",arr[0]);
	printf("Aysenin yedigi cikolata sayisi = %d\n",arr[1]);
}
/* whowin fonksiyonunda ise kimin kazandýgýný bastýrdým. */
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
