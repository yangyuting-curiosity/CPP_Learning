#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()
using namespace std;

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
