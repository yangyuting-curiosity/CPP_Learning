#include "person.h"
#include <iomanip>
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//重載運算子
// 此處有參考跟沒參考，代表著城市執行過程中會產生幾個物件。
// 有參考時，只有兩個物件。
// 沒參考時，有三個物件。
int person::operator+(person &p){
    cout << "p.weight: " << p.weight<<endl;
    cout << "weight: " << weight<<endl;

    return p.weight+weight;
}
//建構式
person::person()
{
    //name = "No name";
    height = 0;
    weight = 0;
}
//建構式，給定初始值
person::person( int h, int w)
{
    //name = n;
    height = h;
    weight = w;
}
//解構式
person::~person(void)
{
    cout << "Bye!" <<endl;
}
void person::input()
{
    //cin >> name;
    cin >> height;
    cin >> weight;
}
void person::output()
{
    //cout << "Name:" << name << endl;
    cout << "Height:" << height << " cm" << endl;
    cout << "Weight:" << weight << " kg" << endl;
}
