#include <iostream>
#include <fstream>
#include <iomanip>      // std::setprecision
using namespace std;
typedef unsigned long long int ull;


int main()
{
   double d, prozent;
   cout<<"Введите сумму покупки : ";
   cin>>d;
   cout<<"\n";
   (d > 1000) ? prozent = 5 : prozent = 3;
   cout<<"Вам предоставляется скидка в "<<prozent<<"\n";
   d = d - ((d / 100) * prozent);
   cout<<"Сумма с учетом скидки: ";
   printf ("%.2f\n", d);

}
