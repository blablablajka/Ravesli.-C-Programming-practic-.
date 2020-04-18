#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(){
   int h = 0;
   map <char, int> mp;
   string st;
   cout<<"Введи строку ";
   cin>>st;
   for(int i = 0; i <= st.length(); i++)
   {
       if(mp.count(st[i]) == 0)
       {
           mp[st[i]] = 1;
       }
       else
       {
           h = mp[st[i]]; h++;
           mp[st[i]] = h;
       }
   }
   /*
    for(auto [k, z] : mp)
    {
      cout<<k<<" "<<z<<"\n";          // Realization in C++ 17
    }
   */
   auto itM = mp.begin();
   for(itM = mp.begin(); itM != mp.end(); itM++)
   {
        cout<<itM->first<<" "<<itM->second<<"\n";
   }
}
