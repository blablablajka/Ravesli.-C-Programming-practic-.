#include<cmath>
#include <iostream>

using namespace std;

int main(){
   int d, res;
   cout<<"Введите число не большее 99: ";
   cin>>d;
   res = d % 10;
   d = (d - (d % 10)) / 10;
   if(d >= res)
   {
      cout<<"Большее цифра "<<d<<"\n";
      cout<<"Меньшее цифра "<<res<<"\n";
   }
   else
   {
      cout<<"Большее цифра "<<res<<"\n";
      cout<<"Меньшее цифра "<<d<<"\n";
   }
}
