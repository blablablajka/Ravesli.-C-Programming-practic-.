#include<cmath>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;


int main(){
 int a;
 cout<<"3. Понедельник"<<"\n";
 cout<<"2. Вторник"<<"\n";
 cout<<"3. Среда"<<"\n";
 cout<<"4. Четверг"<<"\n";
 cout<<"5. Пятница"<<"\n";
 cout<<"6. Суббота"<<"\n";
 cout<<"7. Воскресенье"<<"\n";
 cout<<"Введите номер ";
 cin>>a;
 switch(a)
 {
 case 1:
     cout<<"Понедельник";
     break;
 case 2:
     cout<<"Вторник";
 case 3:
     cout<<"Среда";
     break;
 case 4:
     cout<<"Четверг";
     break;
 case 5:
     cout<<"Пятница";
     break;
 case 6:
     cout<<"Суббота";
     break;
 case 7:
     cout<<"Воскресенье";
     break;
 }

}
