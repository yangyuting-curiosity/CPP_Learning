#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()
using namespace std;

/*void TransferLetter(string &Letter){
	
	for (char &c : Letter){
		if (islower(c)){
			cout << (char)toupper(c);
		}else{
			cout << (char)tolower(c);
		}
	}
}*/

int main(){
	
	cout << "\n" << endl;
    cout << "Mission #0" << endl;
	cout << "Please input a string." << endl;	
	string letter;
	cin >> letter;
	for (char &c : letter){
		if (islower(c)){
			letter[c] = (char)toupper(c);
		}else{
			letter[c] = (char)tolower(c);
		}
	}
	cout << "Transfer the capital letter to small,small to capital. The Result : " << letter << endl;
    cout << "\n" << endl;

    return 0;

}
