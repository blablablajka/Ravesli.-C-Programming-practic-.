#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main(){

   ifstream file("/home/user/Рабочий стол/file.txt");
   string s;
   int chetvl = 0, chetpr = 0;
   while(file)
    {file >> s;}
   for(int i = 0; i <= s.length(); i++)
   {
       if(s[i] == '}')
            chetvl++;
       if(s[i] == '{')
            chetpr++;
   }
   if(chetvl == chetpr)
   {
       cout<<"Баланс скобок не нарушен!";
   }
   else{
    cout<<"Баланс скобок нарушен!";
   }
}
