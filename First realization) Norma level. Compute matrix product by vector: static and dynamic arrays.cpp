#include<cmath>
#include <iostream>
#include <numeric>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <ctime>
#include <fstream>


using namespace std;

int main(){
  int st, stl, chet = 1, res = 0, maxn = 0;
  cout<<"Введите количество строк матрицы: ";
  cin>>st;
  cout<<"Введите количество столбцов матрицы: ";
  cin>>stl;
  st--; stl--;
  int matrix[st][stl]; vector<int>vec(stl+1);
  for(int i = 0; i <= st; i++)
  {
      for(int j = 0; j <= stl; j++)
      {
          matrix[i][j] = 0;
          cout<<"matrix["<<i+1<<"]["<<j+1<<"] = ";
          cin>>matrix[i][j];
      }
  }
  cout<<"Введите элементы вектора:"<<"\n";
  for(auto&i:vec)
  {
      cout<<"vector["<<chet++<<"] = ";
      cin>>i;
  }
  cout<<"\n"<<"Введенная матрица: "<<"\n";
  for(int i = 0; i <= st; i++)
  {
      for(int j = 0; j <= stl; j++)
      {
         cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
  }
  cout<<"\n"<<"Введенный вектора: "<<"\n";
  for(auto&i : vec)
    cout<<i<<"\n";
  cout<<"Результирующий вектор: "<<"\n";
  for(int i = 0; i <= st; i++)
  {
      if(i != 0)
        cout<<res<<"\n"; res = 0;
      for(int j = 0; j <= stl; j++)
      {
           res += matrix[i][j] * vec[j];
           if(maxn < res)
                maxn = res;
      }
  }
  cout<<res<<"\n";
  cout<<"Максимальное значение = "<<maxn;
}
