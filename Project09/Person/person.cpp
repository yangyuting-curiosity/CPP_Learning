#include "person.h"
#include <iomanip>
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//�����B��l
// ���B���ѦҸ�S�ѦҡA�N��۫�������L�{���|���ʹX�Ӫ���C
// ���ѦҮɡA�u����Ӫ���C
// �S�ѦҮɡA���T�Ӫ���C
int person::operator+(person &p){
    cout << "p.weight: " << p.weight<<endl;
    cout << "weight: " << weight<<endl;

    return p.weight+weight;
}
//�غc��
person::person()
{
    //name = "No name";
    height = 0;
    weight = 0;
}
//�غc���A���w��l��
person::person( int h, int w)
{
    //name = n;
    height = h;
    weight = w;
}
//�Ѻc��
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
