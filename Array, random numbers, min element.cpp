#include <iostream>
#include <string>
using namespace std;

float two_dot(float n)
{
    string f = to_string(n);
    return stof((f.substr(0, 4)));
}
float random(float min, float max)
{
    return two_dot(((float)(rand())/RAND_MAX*(max - min) + min));
}

int main(){
 srand(time(0));
 int a, b, minn = 0;

 float **mat = new float* [10];
 for(int coun = 0; coun < 10; coun++)
    mat[coun] = new float [10];

 cout<<"Введите число a: ";
 cin>>a;
 cout<<"Введите число b: ";
 cin>>b;
 for(int i = 0; i < 10; i++){
     for(int j = 0; j < 10; j++)
     {
         mat[i][j] = random(a,b);
         if (minn > mat[i][j])
            minn = mat[i][j];
         cout<<mat[i][j]<<" ";
     }
     cout<<"\n";
    }
}
