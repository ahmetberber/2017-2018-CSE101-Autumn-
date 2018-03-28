#include <stdio.h>


int fact(int n); 
int powr(int x,int n);
double sin(double x);


int main() 
{ 
	printf("sin30: %f\nsin31: %f\nsin32: %f\nsin33: %f\nsin34: %f\nsin35: %f\n",sin(30*3.14/180),sin(31*3.14/180),sin(32*3.14/180),sin(33*3.14/180),sin(34*3.14/180),sin(35*3.14/180)); /*To convert the values ??to radians, multiply by pi and divide by 180.*/
	return 0;
}
int fact(int n)
{
    int result=1;
    int i;
    for(i=1;i<=n;i++)
    {
		result*=i; /* to get factorial, i multiplied by "result" until "n" */
    }
    return result;
}
int powr(int x,int n)
{
	x/=10;
    int result=1; /* I wanted the base function to multiply "x" by as small as "i", "n" */
    int i;
    for(i=1;i<=n;i++)
    {
       result*=x;
    }
    return result;
}
double sin(double x)
{
    double result=0;
    int i;    
    x*=10000000;
    for(i=0;i<10;i++)
    {
		result += ((double)powr(-1,i) * (double)powr(x,2*i+1) / fact(2*i+1))/1000000; /*I arranged the necessary functions in accordance with the Taylor expansion equation.*/
    }
    return result;
}
