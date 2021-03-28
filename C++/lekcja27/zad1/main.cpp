#include <iostream>

using namespace std;

int f(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return f(n-1)+2;
    }
}


long long int potega(int p, int w)
{
    if (w==0)
    {
        return 1;
    }
    else
    return p*potega(p,w-1);
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
//cout << "wynik "<<f(2);
//cout << potega(3,4);

cout <<"fib liczby "<<4 <<" z kolei to :"<<fib(42);

	return 0;
}
