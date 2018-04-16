#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()
using namespace std;

//#define N = 5
// 練習函式引數，傳入陣列，利用傳入「指標＋陣列長度」
// 注意！！ 此處函式的第一個引述是指標,與main()中的陣列data不同。
void printArrary(int *data,int len){
	
	for (int i=0 ; i<len ; i++){
		*(data+i) = i+1;
	}	
	for (int i=0 ; i<len ; i++){
		cout << "The arrary : " *(data+i) << " ";
	}
	
	//return sum;
}


int main(){
	
	cout << "\n" << endl;
    cout << "Mission #0" << endl;
	cout << "Please enter an number N of arrary." << endl;
	int N;
	cin >> N;
	int data=[],len;
	len = N; //sizeof(data);  
	printArrary(data,len);
    cout << "\n" << endl;

    return 0;

}
