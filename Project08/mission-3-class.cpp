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

class tringle{
	float a_length;
	float b_length;
	float a_length;
	float cosA(a_length,b_length,c_length); //類別triangle的函式宣告
	float cosB(a_length,b_length,c_length);
	float cosC(a_length,b_length,c_length);
	void print();
};
//類別triangle的函式定義
float triagle::cosA(float a,float b,float c){
	float result;
	result = (pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
	return result;
}
float triagle::cosB(float a,float b,float c){
	float result;
	result = (pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c);
	return result;
}
float triagle::cosC(float a,float b,float c){
	float result;
	result = (pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a);
	return result;
}
void triagle::print(){
	cout << "a_length : " << a_length << endl;
	cout << "b_length : " << b_length << endl;
	cout << "c_length : " << c_length << endl;
	cout << "cosA : " << cosA(a_length,b_length,c_length) << endl;
	cout << "cosB : " << cosB(a_length,b_length,c_length) << endl;
	cout << "cosC : " << cosC(a_length,b_length,c_length) << endl;
}


int main(){
	
	cout << "\n" << endl;
    
	cout << "Mission #0" << endl;
	cout <<"The triangle information. ";
	cout << "\n" << endl;

    return 0;

}





