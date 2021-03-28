#include <iostream>

using namespace std;

int main()
{
string wyraz;
 cout <<"podaj wyraz ";
getline(cin,wyraz);
 int dl=wyraz.length();
 string odwr;
    string pomocnik;
 for (int i=dl-1;i>=0;i--)
 {
     pomocnik=wyraz[i];
     odwr=odwr+pomocnik;
 }
    cout <<"******"<<endl<<odwr<<endl;



    return 0;
}
