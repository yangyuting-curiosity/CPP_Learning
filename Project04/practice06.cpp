#include <iostream> // 輸入輸出串流
#include <iomanip> // 輸入輸出
//#include <cmath>
#include <string>
#include <math.h>
#include <stdio.h> // 標準輸入輸出，getchat(),putchar()
#include <ctype.h> // 字元處理函式庫

#define STUDENT 5  //變數定義最好用大寫
using namespace std;

int main()
{
    cout << "\n" << endl;

    cout << "Mission #0" << endl;
    int arr[3]={1,2,3};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    //cout << arr[3] << endl; // 超過陣列的存取範圍，可能取出別的記憶體設定的值。
    //cout << arr[4] << endl; //
    cout << "\n" << endl;

    cout << "Mission #1" << endl; // create an arrary which is composed of 1,2,...,100
	int x[100];
	for (int i=0;i<100;i++){
		x[i]=i+1;
	//	cout << "x["<< i+1 << "] = " << x[i] << endl;
	}
    cout << "\n" << endl;

    cout << "Mission #2" << endl;
	cout << "Please input the Month & Day." << endl;
	int m,d,sum=0;
	cin >> m >> d;
	int days_of_month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	for (int i; i<m-1;i++){
		sum += days_of_month[i];
	}
	sum = sum + d;
	cout << "The order of " << m << "/" << d << " is " << sum << endl;
	cout << "\n" << endl;

    cout << "Mission #3" << endl;
	cout << "Please input 5 score of different student." << endl;
	int score[STUDENT],s=0;
	for (int i=0 ; i<STUDENT ;i++ ){
		cin >> score[i];
		cout << "#" <<i+1 << " student score is : "<< score[i] << endl;
		s += score[i];
	}
	double sd=0.0,ave = s/STUDENT;
	cout << "The Average score is : " << ave << endl;
	for (int i=0;i<STUDENT;i++){
		sd += pow(score[i]-ave,2);
		if (score[i]-ave<0){
				cout << "#"<<i+1<<" is below the average." << endl;
		}
	}
	cout << "The Standard Deviation is : " << pow((sd/STUDENT),0.5) << endl;
	//cout << score[4] << endl;
    cout << "\n" << endl;

    cout << "Mission #4 - sorting problem" << endl; //sorting problem solve yet.
	cout << "Please input 5 number : " ;
	double a[5];
	for (int i=0;i<5;i++){
		cin >> a[i];
	}
	double temp;
	for (int i=0;i<5;i++){
		if ( a[i] > a[i+1] ){
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}
	cout << "The ordered arrary is : ";
	for (int i =0 ;i<5;i++){
		cout << a[i];
	} 
    cout << "\n" << endl;

    cout << "Mission #5" << endl;
	float scores[2][3];
	for (int Class=0;Class<2;Class++){
		for (int Student=0;Student<3;Student++){
			cout << "Please input Class#"<< Class+1 <<" #"<<Student+1<<"Student's score : "<< endl;
			cin >> scores[Class][Student];
			cout << "The Class#"<< Class+1 <<" #"<<Student+1<<"Student's score is : "<<scores[Class][Student]<< endl;
		}
	}
    cout << "\n" << endl;

    cout << "Mission #6 - Creat 2D arrary to built multiplication table." << endl;
	int table_99[9][9];
	for (int i=0;i<9;i++){
		for (int j=0;j<9;j++){
			table_99[i][j] = (i+1)*(j+1);
			cout <<i+1<<"*"<<j+1<<"="<< setw(2)<< table_99[i][j] << "  ";	
		}
		cout << endl;
	}
    cout << "\n" << endl;

    cout << "Mission #7" << endl;
    cout << "\n" << endl;

    cout << "Mission #8" << endl;
    cout << "\n" << endl;

    cout << "Mission #9 - Built exponential table of 2." << endl;
	
    cout << "\n" << endl;

	cout << "Mission #10 - Transfer the capital letter to small,small to capital." << endl;
	cout << "Please input a string : " << endl;
	string lectter = ""; //***
	//cin >> lectter;
	getline(cin,lectter);
	for (char c : lectter){
		if (){
		
		}	
	}
	cout << "\n" << endl;

	cout << "Mission #11" << endl;
	cout << "\n" << endl;

	cout << "Mission #12" << endl;
	cout << "\n" << endl;

	cout << "Mission #13" << endl;
	cout << "\n" << endl;

	cout << "Mission #14" << endl;
	cout << "\n" << endl;

	cout << "Mission #15" << endl;
	cout << "\n" << endl;
	
    return 0;
}

