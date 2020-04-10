#include<cmath>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <ctime>

using namespace std;

int main(){
 srand(time(0));
 int st, stl, res = 0;
 cout<<"Введите количество строк матрицы: ";
 cin>>st;
 cout<<"Введите количество столбцов матрицы: ";
 cin>>stl;
 st--; stl--;
 int m[st][stl];
 for(int i = 0; i <= st; i++)
 {
     for(int j = 0; j <= stl; j++)
     {
         m[i][j] = rand() % 100;
         cout<<m[i][j]<<" ";
     }
     cout<<"\n";
 }
 for(int i = -1; i < st; ++i)
 {
    res += m[i + 1][i + 1];
 }
 cout<<res;
}
