#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()

#include <time.h> // 引入時間相關的函式庫
#include <chrono> // 新興的時間函式庫

#include "Point2D.h" //****

using namespace std;

int getxf(Point2D &P){
   	return P.x;
}
int getyf(Point2D &P){
   	return P.y;
}

int main(){
	
	cout << "\n" << endl;
    
	cout << "Mission #0" << endl;
	cout <<"The triangle information. " << endl;
	Point2D p1(9,6);
	Point2D p2(3,6);
	Point2D p3;	
	//Point2D p4;
	float d;	
	p3 = p1 + p2;
	//p4 = p1 - p2;
	d = p1 - p2; // 此處的-號為計算兩點之間的距離
	cout <<"Point-1: ("<<p1.getX()<<","<<p1.getY()<<")"<< endl; 
	cout <<"Point-2: ("<<p2.getX()<<","<<p2.getY()<<")"<< endl; 
	cout <<"Point-3: ("<<p3.getX()<<","<<p3.getY()<<")"<< endl; 
//	cout <<"Point-4: ("<<p4.getX()<<","<<p4.getY()<<")"<< endl; 
	cout <<"Distance between p1 & p2: "<<d<< endl; 

	cout << "Point-1-theta:" << p1.gettheta()<<endl;
	cout << "Point-2-theta:" << p2.gettheta()<<endl;
	cout << "Point-3-theta:" << p3.gettheta()<<endl;
	
	cout << "Point-1-x:"<< getxf(p1)<<endl;
	cout << "Point-1-y:"<< getyf(p1)<<endl;
	
	// 練習使用 <<,>>重載運算子
	Point2D p4;
	cin >> p4;
	cout << p4 << endl;

	cout << "\n" << endl;
    return 0;
}





