#include <iostream>
#include <string>
using namespace std;

int main(){
 int por = 1, porr = 0;
 string s, word = "", r = "";
 getline(cin, s);// считываем всю строку, а не через просто cin. Ведь тогдв считает только первое слово
 for(int i = 0; i <= s.length(); i++)
 {
     if(s[i] == '.' || s[i] == ',' || s[i] == ':' || s[i] == '-' || s[i] == ':' || s[i] == '(' || s[i] == ')')
     {
         continue;
     }
     if(s[i] == ' '){
        if(r.length() < word.length())
        {
              r = word;
              porr = por;
        }
        word = "";
        por++;
     }
     if(s[i] != ' '){
        word += s[i];
     }
  }
  cout<<"The longest word at number "<<porr<<" : "<<r;
}
