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

// Enumeration 列舉 ****
// Structure 結構

enum Action1{stop,walk,sit};
enum Action2{stop=1,walk,sit=4,start=6,apple,banana};

int main(){
	
	cout << "\n" << endl;
    
	cout << "Mission #0" << endl;
	Action1 test1 = stop;
	Action2 test2 = apple;
	cout << test1 << endl;
	cout << test2 << endl;
    cout << "\n" << endl;

    return 0;

}







