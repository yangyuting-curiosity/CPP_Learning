#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()
using namespace std;

void compare(int x,int y,int z,int &max,int &min){

	if (x > y && x > z){
		max = x;
	}else if (y > z && y > x){
		max = y;
	}else if (z > y && z > x){
		max = z;
	}else if (x < y && x < z){
		min = x;
	}else if (y < z && y < x){
		min = y;
	}else if (z < y && z < x){
		min = z;
	}
}
int main(){
	
	cout << "\n" << endl;
    cout << "Mission #0" << endl;
	int a,b,c,Max,Min;
	cout << "Please input 3 integer." << endl;
	cin >> a >> b >> c;
	cout << "The max value :  " << compare(a,b,c,Max,Min) << endl;
	cout << "The min value :  " << compare(a,b,c,Max,Min) << endl;
    cout << "\n" << endl;

    return 0;

}
