/*
Задание №1
Сэндвич с мороженым — это строка, образованная двумя одинаковыми концами и разной серединой. Например:

AABBBAA
3&&3
yyyyymmmmmmmmyyyyy
hhhhhhhhmhhhhhhhh

Обратите внимание, что левый и правый концы сэндвича идентичны как по длине, так и по повторяющимся символам. Середину составляет третий (различный) символ.

Следующее не является сэндвичем с мороженным:

BBBBB // вы не можете иметь только мороженное (без сэндвича)
AAACCCAA // вы не можете иметь неравные окончания в сэндвиче
AACDCAA // вы не можете иметь начинку с разных символов
A // ваш сэндвич не может быть менее 3-ёх символов

Напишите программу, которая возвращает true, если строка, введенная пользователем, является сэндвичем с мороженым, и false в противном случае.

Примеры
isIcecreamSandwich ("CDC") ➞ true
isIcecreamSandwich ("AAABB") ➞ false
isIcecreamSandwich ("AA") ➞ false

Примечание
Сэндвич с мороженым должен иметь минимальную длину 3 символа, и как минимум два из этих символов должны быть различны.


*/



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
