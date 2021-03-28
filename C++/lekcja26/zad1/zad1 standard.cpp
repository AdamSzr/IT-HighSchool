#include <iostream>

using namespace std;




long int potega(int a, int b)
{
    int pote=1;
    for (int w=0; w<b ;w++)
    {
        pote=pote*a;
    }
return pote;
}

 long int rekr(int a, int b)
{

    if (b==0)
    {
        return 1;
    }
    else return a*rekr(a,b-1);
return a;
}

int main()
{










cout <<"iteracyjny "<< potega(4,10);





cout <<endl<<"czas rekurencyjny"<<rekr(4,10);



	return 0;
}
