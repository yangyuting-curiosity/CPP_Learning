#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>

#include <stdlib.h>  // 動態記憶體配置需要malloc()
// rand() 在此stdlin.h 內。
#include <time.h> // 引入時間相關的函式庫
#include <chrono> // 新興的時間函式庫
using namespace std;

// MonteCalo calcultae for pi。
// 
#define MonteCarloStep 1000

int main(){
	
	cout << "\n" << endl;
    cout << "Mission #1" << endl;
    srand(time(NULL));
	cout << "現在時間:"<< time(NULL) << endl;
	cout << "有種子的隨機數:"<< rand() << endl;
	cout << "隨機數的最大值:"<< RAND_MAX << endl;

	// calculate for pi
	//int i = rand() % 100;
	//cout << i << endl;
	int sum=0;
	int r = rand() % +1; //設定圓的半徑
	int xarr[MonteCarloStep];
	int yarr[MonteCarloStep];

	for (int i=0 ; i< MonteCarloStep ; i++){
		xarr[i] = rand() % 100 +1;
		yarr[i] =  rand() % 100 +1;
		//cout << arr[i] << " ";
	}
	
	for (int j=0; j<MonteCarloStep ;j++){
		int x2,y2;
		x2 = pow((xarr[j]-r),2);
		y2 = pow((yarr[j]-r),2);
		double s = pow((x2+y2),0.5);
		if( s < r ){
			sum += 1;
		}
	}
	cout << "Pi = " << (double) sum/MonteCarloStep << endl;
		
	cout << "\n" << endl;

    return 0;

}







