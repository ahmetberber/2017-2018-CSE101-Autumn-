/*AHMET H�LM� BERBER 171044027*/ 
#include <stdio.h>

int main() 
{
    int guncelhiz; 		/*g�ncel h�z� tan�mlad�m.*/
    int hedefhiz; 		/*hedef h�z� tan�mlad�m.*/
    printf("guncelhiz: "); 		/*g�ncel h�z� ekrana bast�rd�m.*/
    scanf("%d", & guncelhiz); 		/*girilen say� de�erini guncelhiz degerine ataad�m.*/
    printf("hedefhiz: "); 		/*hedef h�z� ekrana bast�rd�m..*/
    scanf("%d", & hedefhiz); 		/*girilen say� de�erini hedefhiz degerine ataad�m.*/
    if (guncelhiz > hedefhiz) 
	{
      	printf("Hiziniz hedef hizdan yuksektir!"); 		/*hedef h�za gelince de t�rnak i�indeki ifadeyi bast�r dedim.*/
    }
    while (guncelhiz <= hedefhiz) 
	{
      	printf("%d\n", guncelhiz); 		/*g�ncel hiz hedef h�zdan k�c�kse,*/
     	guncelhiz += 1;		 /*guncelhizi 1 artt�r dedim.*/
    }
    return 0;
}
