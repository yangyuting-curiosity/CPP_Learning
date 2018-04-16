#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()
using namespace std;

int F(int i,int j){
	int sum = i+j;
	return sum;
}

int main(){
	
	cout << "\n" << endl;
    cout << "Mission #0" << endl;
	int a,b;
	cout << "Please input 2 integer." << endl;
	cin >> a >> b;
	cout << "a + b = " << F(a,b) << endl;
    cout << "\n" << endl;

    return 0;

}
