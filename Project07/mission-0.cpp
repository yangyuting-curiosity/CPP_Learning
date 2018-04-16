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

int main(){
	
	cout << "\n" << endl;
    cout << "Mission #0" << endl;
	//int N;
	time_t t;
	time(&t);
	cout << "The currrent time is : "<< ctime(&t)  << endl;
	//cin >> N;;
	//cout << "1 + 2 + ... + N  = " << F(N) << endl;
    cout << "\n" << endl;

    return 0;

}







