/*AHMET HÝLMÝ BERBER 171044027*/ 
#include <stdio.h>

int main() 
{
    int guncelhiz; 		/*güncel hýzý tanýmladým.*/
    int hedefhiz; 		/*hedef hýzý tanýmladým.*/
    printf("guncelhiz: "); 		/*güncel hýzý ekrana bastýrdým.*/
    scanf("%d", & guncelhiz); 		/*girilen sayý deðerini guncelhiz degerine ataadým.*/
    printf("hedefhiz: "); 		/*hedef hýzý ekrana bastýrdým..*/
    scanf("%d", & hedefhiz); 		/*girilen sayý deðerini hedefhiz degerine ataadým.*/
    if (guncelhiz > hedefhiz) 
	{
      	printf("Hiziniz hedef hizdan yuksektir!"); 		/*hedef hýza gelince de týrnak içindeki ifadeyi bastýr dedim.*/
    }
    while (guncelhiz <= hedefhiz) 
	{
      	printf("%d\n", guncelhiz); 		/*güncel hiz hedef hýzdan kücükse,*/
     	guncelhiz += 1;		 /*guncelhizi 1 arttýr dedim.*/
    }
    return 0;
}
