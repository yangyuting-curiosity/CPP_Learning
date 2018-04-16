#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	
	int a;
	bool flag = true;
	while(flag){
		cout << "Please enter an integer N (or 0 to leave)." << endl;
		cin >> a;
		if (a == 0){
			flag = false;
		}
		cout << "The prime factors of N are shown below : " << endl;
		for(int i=1;i<=a;i++){
			if(a%i == 0){
				cout << i << " is the prime factor of " << a << endl;
			}
		}				
		cout << "------------------------------------------" << endl;
	}
	return 0;
}
