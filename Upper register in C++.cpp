#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  std::string str;
  cin>>str;
  std::transform(str.begin(), str.end(), str.begin(), (int (*) (int)) toupper);
  cout<<str;
}
/*
Real Solution

#include <iostream>
 
int main()
{
char chLetter('a');
  
std::cout << "Введите букву нижнего регистра:\n\n";
 
std::cin >> chLetter;
 
chLetter = chLetter - 32;
 
std::cout << "\nТа же буква в верхнем регистре: " << chLetter << ".\n\n";
 
return 0;
}



*/
