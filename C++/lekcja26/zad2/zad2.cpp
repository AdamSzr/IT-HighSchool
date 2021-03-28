#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
double czas;
clock_t start,stop;
long int fibonacci(int n)
{
     int a = 0, b = 1;

     for(int i=1;i<n-1;i++)
     {
            b += a;
            a = b-a;

     }
     return b;
}

long int fib(int n)
{
    if (n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int main()
{

start=clock();
for (int i=0;i<500000;i++) //tys obrotów pêtla
{
  fibonacci(20); // fibonachi liczby 20 sposób iteracyjny
}

stop=clock();
czas=(double)(stop-start)/CLOCKS_PER_SEC;
cout <<"czas iteracyjny "<<czas;

start=0;stop=0;



start=clock();
for (int i=0;i<500000;i++)
{
  fib(20);  //sposób rekurcyjny
}

stop=clock();
czas=(double)(stop-start)/CLOCKS_PER_SEC;




cout <<endl<<"czas rekurencyjny "<<czas;
	return 0;
}
