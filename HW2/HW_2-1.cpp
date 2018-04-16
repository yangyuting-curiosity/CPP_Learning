#include <iostream>
#include <string.h>
//#include <iomanip> // 控制輸入輸出的格式 
//#include <ctype.h> // tolower,toupper
//#include <math.h>
//#include <fstream> // file stream, ifstream, ofstream
//#include <time.h> //clock(), time(),...

using namespace std;

int main(){
	cout << endl;
	
	cout << "HW_2-1-1:strlen() 輸出字串長度 " << endl;
	char str0[] = {"Hello"};
	cout <<"The Answer : "<< strlen(str0) << endl;	
	cout << endl;
	
	cout << "HW_2-1-2:strcpy() 字串1複製到字串2裡面,並覆蓋原來的值 " << endl;
	char str1[] = {"Hello"};
	char str2[80] = {"WorldIsGreat"};
	strcpy(str2,str1);
	cout <<"The Answer : "<< str2 << endl;	
	//cout <<"求取字元陣列中存放的字串長度,用strlen(str2) : "<< strlen(str2) << endl;	
	//cout <<"求取字元陣列長度,用 sizeof(str2)/sizeof(char) : "<< sizeof(str2)/sizeof(char) << endl;
	cout << endl;

	cout << "HW_2-1-3:strcat() 將字串4,串接至字串3 後面" << endl;
	char str3[] = {"Hello"};
	char str4[80] = {"WorldIsGreat"};
	strcat(str3,str4);
	cout <<"The Answer : "<< str3  << endl;
	cout << endl;

	cout << "HW_2-1-4:strcmp(目的參數,來源參數),比較兩字串是否一樣 " << endl;
	//strcmp的原理是把字串折成一個一個字元來比較，
	//比較的方式是取該字元的ascii相減，
	//如果為0則繼續比較下一個字元，
	//如果不為零時，負則回傳-1，正則回傳1，
	//所以如果是"1234"跟"456789"做strcmp時，
	//第一個字元("1", "4")比較時，
	//因ascii相減為負值，strcmp就會直接回傳-1了，
	//而不是用第四位去比較喔。
	char str5[] = {"Hello"};
	char str6[80] = {"WorldIsGreat"};
	//char str6[80] = {"WorldisGreat"};
	cout <<"The Answer : "<< strcmp(str5,str6) << endl;
	cout << endl;
/*----------以上功能僅適用於 char arrary ----------*/	


/*----------以下功能來自於 string.h 函式庫 ----------*/	

	cout << "HW_2-1-5:insert()  " << endl;
	string str7 = "Hello";
	string str8 = "World Is Great, Why Not Learning C++?";
	cout <<"The Answer : "<< str8.insert(10,str7)  << endl;
	cout << endl;


	cout << "HW_2-1-6:substr()  " << endl;
	string str9 = "World Is Great, Why Not Learning C++?";
	cout <<"The Answer : "<< str9.substr(9,5)  << endl;
	cout << endl;

	cout << "HW_2-1-7:find()  " << endl;
	// 輸出所找字串10在字串11的「第幾個字元位置」之後
	string str10 = "Is";
	string str11 = "World Is Great, Why Not Learning C++?";
	cout <<"The Answer : "<< str11.find(str10)  << endl;
	cout << endl;


	cout << "HW_2-1-8:at()  " << endl;
	// 輸出字串12的「第7位置字元」
	string str12 = "World Is Great, Why Not Learning C++?";
	cout <<"The Answer : "<< str12.at(7)  << endl;
	cout << endl;


	cout << "HW_2-1-9:length()  " << endl;
	// 輸出整串字串的「字符數量（不會計算陣列尾端的空字元\0 ），包含空格、標點符號、\t、\n、\r 等」
	string str13 = "World Is Great, Why Not Learning C++?";
	cout <<"The Answer : "<< str13.length()  << endl;
	cout << endl;
	

	// 小測試，每個字元的[數字型態]就是ASCII code 
	//char n='c';
	//cout << (int)n <<endl;	

	return 0;
}








