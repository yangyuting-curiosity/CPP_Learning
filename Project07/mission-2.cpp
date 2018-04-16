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

// 用函式遞迴去計算列印 Fibonacci serries。
// 開一個時鐘 

int main(){
	
	cout << "\n" << endl;
    cout << "Mission #1" << endl;
	//int N;
	time_t t;
	time(&t);
	cout << "The currrent time is : "<< ctime(&t)  << endl;
	cout << "The test1 - time(&t): "<< time(&t)  << endl;
	cout << "The test2 - t: "<< t  << endl;
	
	clock_t start,finish;
	start = clock();
	cout << "The test3 - start: "<< start  << endl;
	
time(&t);
	cout << "The currrent time is : "<< ctime(&t)  << endl;
	cout << "The test1 - time(&t): "<< time(&t)  << endl;
	
	start = clock();
	cout << "The test4 - finish: "<< finish  << endl;
	
	//cin >> N;;
	//cout << "1 + 2 + ... + N  = " << F(N) << endl;
    cout << "\n" << endl;

    return 0;

}







