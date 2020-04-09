#include<cmath>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std;


int main(){
   int d;
   double res = 0;
   cin>>d;
   vector<double>m(d);
   vector<double>re;
   for(auto&i: m)
       cin>>i;
   for(int i = 0; i <= m.size(); i++)
   {
       if(fabs(m[i]) >= 2.5)
       {
           re.push_back(m[i]);
       }
   }
   for(int i = 0; i <= re.size(); i++)
   {
        res += (re[i] * re[i]);
   }
   cout<<res;
}
