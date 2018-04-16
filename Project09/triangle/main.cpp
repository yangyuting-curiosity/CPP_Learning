#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()

#include <time.h> // 引入時間相關的函式庫
#include <chrono> // 新興的時間函式庫

#include "triangle.h"

using namespace std;

int main(){
	
	cout << "\n" << endl;
    
	cout << "Mission #0" << endl;
	cout <<"The triangle information. " << endl;
	triangle t1(3,4,5);
	triangle t2(6,9,12);
	triangle t3;
	//cout << t1.cosA() << endl; 
	//cout << t2.cosA() << endl; 
	cout << t3.print() << endl; 
	
	cout << "\n" << endl;

    return 0;

}





