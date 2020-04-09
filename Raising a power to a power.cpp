#include<cmath>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int pow2(int n, int st)
{
    int res = n;
    for(int i = 1; i < st; i++)
        res *= n;
    return res;
}

int main(){
    int n,st;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Enter power ";
    cin>>st;
    cout<<"number = "<<pow2(n,st);
}
