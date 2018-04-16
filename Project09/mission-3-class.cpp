#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()

#include <time.h> // 引入時間相關的函式庫
#include <chrono> // 新興的時間函式庫
using namespace std;

// Class 類別 

class triangle{
	float a;
	float b;
	float c;
	float cosA(float,float,float); //類別triangle的函式宣告
	float cosB(float,float,float);
	float cosC(float,float,float);
	void print();
};
//類別triangle的函式定義
float triangle::cosA(float a,float b,float c){
	float result;
	result = (pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
	return result;
}
float triangle::cosB(float a,float b,float c){
	float result;
	result = (pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c);
	return result;
}
float triangle::cosC(float a,float b,float c){
	float result;
	result = (pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a);
	return result;
}
void triangle::print(){
	cout << "a_length : " << a << endl;
	cout << "b_length : " << b << endl;
	cout << "c_length : " << c << endl;
	cout << "cosA : " << cosA(a,b,c) << endl;
	cout << "cosB : " << cosB(a,b,c) << endl;
	cout << "cosC : " << cosC(a,b,c) << endl;
}


int main(){
	
	cout << "\n" << endl;
    
	cout << "Mission #0" << endl;
	cout <<"The triangle information. ";
	cout << "\n" << endl;

    return 0;

}





