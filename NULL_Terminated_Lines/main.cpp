//
//  main.cpp
//  NULL_Terminated_Lines
//
//  Created by Анна Горячева on 15.03.2021.
//

#include <iostream>
using namespace std;
#include <locale>
#include <cstdlib>

int StrLen(char str[]);

void to_upper(char str[]); //Переводит строку в верхний регистр
void to_lower(char str[]);
void shrink(char str[]);

bool is_palindrome(char str[]);
bool is_int_number(char str[]);
int  to_int_number(char str[]);
bool is_bin_number(char str[]);

int main() {
    setlocale (LC_ALL, "");
//    char str[] = {'H','e','l','l','o'};
//    char str[]="Hello";
//    cout << str << endl;
//    cout << sizeof(str) << endl;
//    cout << sizeof("Hello") << endl;
    cout << 'A' - 'a'<< endl;
    const int n = 20;
    char str[n] = {};
    cout << "Введите строку: ";
//    cin >> str;
    cin.getline(str,n);
    cout << str << endl;
    cout << sizeof(str)<<endl;
    cout <<StrLen(str)<<endl;
    to_upper(str);
    cout << str << endl;
    to_lower(str);
    cout << str << endl;
    shrink(str);
    cout << str << endl;
    is_palindrome(str);
    is_int_number(str);
    cout << to_int_number(str)<< endl;
    is_bin_number(str);
    return 0;
}
int StrLen(char str[])
{
    int i=0;
    for(; str[i]; i++);
    return i;
}
void to_upper(char str[])
{
    for(int i=0;str[i];i++)
//    {
//        if(str[i]>='a' && str[i]<='z' || str[i]>= 'a' && str[i]<= 'я')
//            str[i]-=32;
//    }
    str[i]= toupper(str[i]); //встроенная функции из библиотеки ctype.h
}
void to_lower(char str[])
{
    for(int i=0;str[i];i++)
    str[i]= tolower(str[i]);
    
}
void shrink (char str[])
{
    
    for(int i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            str[i]=str[i+1];
        }
    }
}
bool is_palindrome(char str[])
{
    for(int i=0; i<StrLen(str)/2;i++)
    {
        if(str[i] != str[StrLen(str)-i-1])
        {
            cout << "Не палиндром"<< endl;
            return false;
        }
    }
    cout << "Поздравляю! Это палиндром" << endl;
    return true;
}
bool is_int_number(char str[])
{
    for(int i=0; i<StrLen(str);i++)
    {
        if(str[i] < 48 || str[i]>57)
        {
            cout << "Это не целое число "<< endl;
            return false;
    }
        else
        {
            cout << "Поздравляю, это целое число!" << endl;}
    }
    return true;
}
int  to_int_number(char str[])
{
    int value=0;
    if(is_int_number(str)==true)
    {
        value=atoi(str);
    }
    
    return value;
}
bool is_bin_number(char str[])
{
    int count=0;
    for(int i=0; str[i];i++)
    {
        if(str[i]=='1' || str[i]=='0')
        count++;
    }
    if(count==StrLen(str))
    {cout<<"Это двоичное число"<<endl;
        return true;}
    else
        cout << "Это не двоичное число"<<endl;
    return false;
}
int  bin_to_dec(char str[])
{
    
}
