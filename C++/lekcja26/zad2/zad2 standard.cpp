#include <iostream>

using namespace std;

long int fibonacci(int n)
{
     long long a = 0, b = 1;

     for(int i=0;i<n;i++)
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
        return 2;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int main()
{




cout <<"iteracyjny "<<fibonacci(20);


   //sposób rekurcyjny
}



cout <<endl<<"rekurencyjny "<<fib(20);
	return 0;
}
