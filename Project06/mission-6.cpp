#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()
using namespace std;

// 練習函式引數，傳入陣列，利用傳入「指標＋陣列長度」
// C++ 函式的參數，不允許傳入陣列。
// 順便練習malloc，寫一個陣列存放學生成績，函式輸出此陣列的成績，以及輸出平均數。

int F(int x){
	int sum = 0;
	for (int i=1;i<=x;i++){
		sum += i;
	}
	return sum;
}

int main(){
	
	cout << "\n" << endl;
    cout << "Mission #0" << endl;
	int N;
	cout << "Please input an integer N." << endl;
	cin >> N;;
	cout << "1 + 2 + ... + N  = " << F(N) << endl;
    cout << "\n" << endl;

    return 0;

}
