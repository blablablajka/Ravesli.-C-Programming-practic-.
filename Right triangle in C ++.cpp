#include <iostream>
#include <string>

using namespace std;

int main(){
  string Z = "*";
  for(int i = 0; i < 10; i++)
  {
      cout<<Z<<"\n";
      Z = Z + " *";
  }
}
