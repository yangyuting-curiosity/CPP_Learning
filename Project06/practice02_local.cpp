#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()

// maclloc 代表要挖出多少記憶體空間的指令
using namespace std;

int main(){
	
	cout << "\n" << endl;
    cout << "Mission #0" << endl;
	int *p;
	int v = 10;
	p = &v;
	
	cout << p << " : 變數\"v\"的記憶體位址" << endl;
	cout << &v << " : 變數\"v\"的記憶體位址" << endl;
	cout << *p << " : 變數\"v\"存放的值" << endl;
	cout << v << " : 變數\"v\"存放的值" << endl;
	cout << *p << " : 指標\"p\"" << "的記憶體位址" << endl;
    cout << "\n" << endl;

    cout << "Mission #1" << endl;
	float *p1,*p2;
	float f = 2.5;
	p1 = &f;
	p2 = &f;
	cout << "Initialize f to " << f << endl;
	cout << "p1 = " << p1 <<endl<< "p2 = " << p2 << endl;
	f = 3.5;
	cout << "Now,change f to " << f << endl;
	cout << "p1 = " << p1 <<endl<< "p2 = " << p2 << endl;
    cout << "\n" << endl;



    cout << "Mission #2" << endl;
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	int *P;
	P = A; //陣列名稱A為該陣列的初始記憶體位址
	cout << "A: " << A <<endl;
	cout << "&A[0]: " << &A[0] <<endl;
	
	*P = 100;
	for(int c : A){
		cout << c<< ' ' ;
	}
	cout << endl;
	
	for(int i=0;i<10;i++){
		cout << "*(P+i) : " << *(P+i)<< endl;
		//cout << "P[i] : " << P[i] << endl; 
	}cout << endl;
	for(int i=0;i<10;i++){
		cout << "P[i] : " << P[i]<<endl;
	}cout << endl;
	
    cout << "\n" << endl;


    cout << "Mission #3" << endl;
	int arr[50];
	int *p3;
	p3 = arr;
	for(int i=0;i<50;i++){
		p3[i] = i+1;
		cout << p3[i] << " ";
	}cout<< endl;
    cout << "\n" << endl;

    cout << "Mission #4 - Fibonacci number:" << endl;
	const int N = 30;
	int Fibonacci[N];
	int *p4;
	p4 = Fibonacci;
	for (int i=2;i<30;i++){
		p4[0] = 1;
		p4[1] = 1;
		p4[i] = p4[i-1] + p4[i-2]; 
	}
	for (int i=0;i<30;i++){
		cout << p4[i] << " ";
	}cout<< endl;
    cout << "\n" << endl;


    cout << "Mission #5 - Sorting is critical in Algorithm" << endl;
	cout << "Please enter 5 number : " << endl;
	const int N2 = 5;
	double arr2[N2],temp=0;
	for(int i=0;i<N2;i++){
		cin >> arr2[i];
	}
	double *p5 = arr2;
	cout << "Before sorting! The arrary :" << endl;
	for(int i=0;i<N2;i++){
		cout << p5[i] << " ";
	}cout << endl;
	for (int i=0;i<N2;i++){
		for(int j=0 ;j<N2-i;j++){
			if(p5[i]>p5[i+1]){
				temp = p5[j];
				p5[j] = p5[j+1];
				p5[j+1] = temp;
			}
		}
	}
	cout << "After sorting! The arrary :" << endl;
	for(int i=0;i<N2;i++){
         cout << p5[i] << " ";
    }cout << endl;

    cout << "\n" << endl;


    cout << "Mission #6 - 測試動態記憶體空間配置 " << endl;
	int N3;
	cout << "Please input the number N3: 要開多少個(N3個)int型態(=4byte)的記憶體空間" << endl;
	cin >> N3;
	int *p6 = (int *) malloc(sizeof(int) * N3);//此處開了一個4byte*N3的動態記憶體空間給一個指標p6
	for(int i=0;i<N3;i++){
		p6[i]=i+1;
		cout << p6[i] << " " ;
	}cout << endl;
	cin >> N3;
	cout << "delte p6 test: " << N3;
	//free(p6);
	delete [] p6; //*****

    cout << "\n" << endl;


    cout << "Mission #7 - practice4 學生資料用指標存取" << endl;
	int students = 0;
	cout << "Please input the number of students." << endl;
	cin >> students;
	float *p7 = (float *) malloc(sizeof(float)*students);
	for (int i=0;i<students;i++){
		cout << "Please input #" << i+1 << " student's score :"<<endl;
		cin >> p7[i]; 
	}
	for (int i=0;i<students;i++){
		cout << "The #"<< i+1 << " student's score is "<< p7[i] << endl;
	}
	delete p7;
    cout << "\n" << endl;

    cout << "Mission #8" << endl;

    cout << "\n" << endl;

    return 0;

	

}
