#include<cmath>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){

int d, one, two, three;
cout<<"Введите трёхзначное число ";
cin>>d;
one = (d - (d % 100)) / 100;
two = ((d - (d % 10)) % 100) / 10;
three = (d % 10);
if(one == two || one == three || two == three)
    cout<<"Среди цифр введенного трехзначного числа "<<d<<" есть одинаковые";

else
    cout<<"Среди цифр введенного трехзначного числа "<<d<<" нет одинаковых";

}
