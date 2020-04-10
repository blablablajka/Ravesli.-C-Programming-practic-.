#include <iostream>

using namespace std;

int main(){
 int n,res = 0, s = 0;
 cout<<"Введите правую границу интервала чисел: ";
 cin>>n;
 while(res != (n+1))
 {
     if(res  % 5 == 0)
     {
       s += res;
     }
     res++;
 }
 cout<<"Сумма чисел нацело делящихся на 5 = "<<s;

}
