//類別triangle的函式定義
#include "triangle2.h"
#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

triangle2::triangle(){
    a=b=c=6;
}
triangle2::triangle(float x,float y,float z){
    a = x;
    b = y;
    c = z;
}
triangle2::~triangle(){
    coot << "Bye!" << endl;
}

float triangle2::cosA(float a,float b,float c){
	float result;
	result = (pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
	return result;
}
float triangle2::cosB(float a,float b,float c){
	float result;
	result = (pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c);
	return result;
}
float triangle2::cosC(float a,float b,float c){
	float result;
	result = (pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a);
	return result;
}
void triangle2::setting(float x,float y,float z){
    a = z;
    b = y;
    c = z;
}
void triangle2::print(){
	std::cout << "a_length : " << a << std::endl;
	std::cout << "b_length : " << b << std::endl;
	std::cout << "c_length : " << c << std::endl;
	std::cout << "cosA : " << cosA(a,b,c) << std::endl;
	std::cout << "cosB : " << cosB(a,b,c) << std::endl;
	std::cout << "cosC : " << cosC(a,b,c) << std::endl;
}

