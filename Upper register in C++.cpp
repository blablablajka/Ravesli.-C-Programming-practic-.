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
