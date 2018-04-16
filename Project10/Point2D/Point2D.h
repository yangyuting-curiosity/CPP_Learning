// Point2D.h
#pragma once  // 與ifndef+define+endif 用法是屬於二擇一
//#ifndef POINT2D_H_INCLUDED
//#define POINT2D_H_INCLUDED
#include <iostream>
//using namespace std;
class Point2D{
	private:
		int x;
		int y;
	public:
		Point2D();  		//initialize value
		Point2D(int,int);	//initialize value 
		void setX(int);
		void setY(int);
		int getX();
		int getY();
		Point2D operator+(Point2D &); //重載+運算子
		//Point2D operator-(Point2D &); //重載-運算子
		float operator-(Point2D &);
		double gettheta();
		double getr();
		friend int getxf(Point2D &); // *** friend 函式
        friend int getyf(Point2D &);
		friend std::ostream& operator<<(std::ostream&,Point2D);
		friend std::istream& operator>>(std::istream&,Point2D &);
};
/*  // 此處教訓，friend 函式要寫在cpp檔
int getxf(Point2D &P){
    return P.x;
}
int getyf(Point2D &P){
    return P.y;
}*/

//#endif
