#include <stdio.h>


int fact(int n);
int pow(int x,int n);
double sin(double x);


int main() 
{ 
	printf("sin30: %f\nsin31: %f\nsin32: %f\nsin33: %f\nsin34: %f\nsin35: %f\n",sin(30*3.14/180),sin(31*3.14/180),sin(32*3.14/180),sin(33*3.14/180),sin(34*3.14/180),sin(35*3.14/180));
	return 0;
}
int fact(int n)
{
    int result=1;
    int i;
    for(i=1;i<=n;i++)
    {
	result*=i;
    }
    return result;
}
int pow(int x,int n)
{
	x/=10;
    int result=1;
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
		result += ((double)pow(-1,i) * (double)pow(x,2*i+1) / fact(2*i+1))/1000000;
    }
    return result;
}
