#include <iostream>

using namespace std;

int main()
{
    cout << "podaj swoje imie i nazwisko a ja ci powiem dlugosc" << endl;
    string wpis;
    getline(cin,wpis);
    int dlugosc=wpis.length();
    cout <<wpis<<"<--- Tak sie nazywasz, a tyle wprowadziles znakow --->"<<dlugosc;
    return 0;
}
