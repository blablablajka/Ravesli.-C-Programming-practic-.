#include <iostream>
#include <string>

using namespace std;
typedef unsigned long long int ull;

bool isIcecreamSandwich(const std::string &str)
{
    int b = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != str[i+1])
            b++;
    }
    if (std::equal(str.cbegin(), str.cbegin() + str.size() / 2, str.crbegin()) && str.length() >= 3 && b == 3) 
        return true;
    else
        return false;

}

int main()
{
    string s;
    cin>>s;
    cout<<isIcecreamSandwich(s);
    return 0;
}
