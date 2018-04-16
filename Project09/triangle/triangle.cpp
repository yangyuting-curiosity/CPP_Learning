//類別triangle的函式定義
#include "triangle.h"
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

float triangle::cosA(){
	float result;
	result = (pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
	return result;
}
float triangle::cosB(){
	float result;
	result = (pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c);
	return result;
}
float triangle::cosC(){
	float result;
	result = (pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a);
	return result;
}
triangle::triangle(float x,float y,float z){
	a = x;
	b = y;
	c = z;
}
triangle::triangle(){
	a = b = c = 6; 	
} 
triangle::~triangle(){
	cout << "Hello! - class triangle destruct!!" << endl;
}
triangle triangle::operator+(triangle &p){
	int x = a + p.a ; 
	int y = b + p.b; 
	int z = c + p.c;
} 
void triangle::print(){
	std::cout << "a_length : " << a << std::endl;
	std::cout << "b_length : " << b << std::endl;
	std::cout << "c_length : " << c << std::endl;
	std::cout << "cosA : " << cosA() << std::endl;
	std::cout << "cosB : " << cosB() << std::endl;
	std::cout << "cosC : " << cosC() << std::endl;
}

