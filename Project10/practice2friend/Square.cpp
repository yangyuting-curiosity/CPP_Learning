#include <iostream>
#include <math.h>
//#include "Square.h"
#include "Square.h"

using namespace std;

Square::Square(){
	cout << "You didn't enter the length of the Square!" <<endl;
}
Square::Square(int a){
	len = a;
}
int Square::getLen(){
	return len;
}
int Square::area(){
	return pow(len,2);
}

