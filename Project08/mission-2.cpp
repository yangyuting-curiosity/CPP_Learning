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

// Enumeration 列舉 
// Structure 結構 **** 結構只是規格書，還沒有記憶體空間生成，需要再main()裡面宣告變數後，該變數才有記憶體實體空間，也才能夠給訂初使值。

typedef struct{
	string cdatetime;
	string address;
	int district; // 區碼
	string beat;
	int grid;
	string crimedescr;
	int ucr,ncic,code;
	float latitude;
	
} Crim_Data;

double func(int E,int M); //函式宣告

int main(){
	
	cout << "\n" << endl;
    
	cout << "Mission #0" << endl;
	Student s1 = {"Jack",105755003,70,80};
	cout <<"The student #1's average score is ";
	cout << func(s1.Escore,s1.Mscore) << endl;
	cout << "\n" << endl;

    return 0;

}
// 函式定義
double func(int E, int M){
	double sum;
	sum =(double) (E+M)/2.0;
	return sum;
}





