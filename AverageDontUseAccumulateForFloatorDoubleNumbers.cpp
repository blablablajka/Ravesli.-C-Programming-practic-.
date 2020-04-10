#include<cmath>
#include <iostream>
#include <numeric>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <ctime>

using namespace std;

int main(){
    float sum = 0.00; int siz;
    cout<<"Введите размер массива: ";
    cin>>siz;
    vector<float>date(siz);
    for(float &i:date)
        cin>>i;
    for(float i:date)
        sum += i;
   // sum = accumulate(date.begin(), date.end(), 0); // Не используем accumulate для подсчета суммы дробных чисел
    cout<<"\n"<<"Среднее арифметическое равно "<<round((sum / siz)*100) / 100 <<"\n"; // Округление до второй десятичной цифры
    cout<<"Размер вектора "<<date.size()<<"\n";
    cout<<"Сумма элементов "<<sum;

}
