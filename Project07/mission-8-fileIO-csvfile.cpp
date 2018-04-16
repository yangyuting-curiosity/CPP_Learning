#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()

#include <fstream> // ofstream , ifstream ***
#include <time.h> // 引入時間相關的函式庫
#include <chrono> // 新興的時間函式庫
using namespace std;

// 讀入、寫出檔案
//  

int main(){
	
	cout << "\n" << endl;
    cout << "Mission #1" << endl;
	cout << "Please enter your string." << endl;
	string str1;
	getline (cin,str1);
	/*
	// output a file.
	ofstream myfile_output;
	myfile_output.open("exmple.txt"); // ****
	if (myfile_output.is_open()){
		myfile_output << str1;
	}
    myfile_output.close(); // ****
	*/
	// input a file.
	cout << "" << endl; 
	string str2;
	ifstream myfile_input;
	myfile_input.open("TestData.csv"); //***
	if (myfile_input.is_open()){
		while (!myfile_input.eof()){
			for (int i=1; i<8 ;i++){
				if (i == 2){
				getline(myfile_input,str2,','); // *input CSV*
				cout << str2 << endl;
				}else { break; }		
			}
		}
	}else{
		cout << "The file is not exist !!!" << endl;
	}
    myfile_input.close(); // ***
	
    cout << "\n" << endl;
	return 0;

}







