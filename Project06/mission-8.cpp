#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()
using namespace std;
void Type(int);
void Type(float);
void Type(int *,int);

int main(){
	
	cout << "\n" << endl;
    cout << "Mission #0" << endl;
	int N;
	int arr[] = {1,2,3,4,5};
	int len = sizeof(arr)/4; // sizeof()是回傳arr陣列的memorry大小有幾個byte.
	float F;
	Type(arr,len);
	Type(F);
	Type(N);
	//cout << "Please input an integer N." << endl;
	//cin >> N;
    cout << "\n" << endl;

    return 0;

}
void Type(int x){
	cout << "It's an integer : " << x << endl;	
}
void Type(float x){
	cout << "It's a float : " << x << endl;	
}
void Type(int *x,int len){
	cout << "It's an Pointer : ";
	for (int i=0; i<len ;i++){
		cout << *(x+i) ;
	}	cout << endl;
}




