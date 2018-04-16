// Point2D.cpp
#include "Point2D.h"
#include <iostream>
//#include <cmath>
#include <math.h>

//#define M_PI 3.1415926
using namespace std;

Point2D::Point2D(){
	x = y = 0;
}
Point2D::Point2D(int a,int b){
	x = a;
	y = b;
}
void Point2D::setX(int a2){
	x = a2;
}
void Point2D::setY(int b2){
	y = b2;
}
int Point2D::getX(){
	return x;
}
int Point2D::getY(){
	return y;
}
Point2D Point2D::operator+(Point2D &point1){
	int a = x + point1.getX();
	int b = y + point1.getY();
	Point2D tmp(a,b);
	return tmp; 
}
/*Point2D Point2D::operator-(Point2D &point2){
	int a = x - point2.getX();
	int b = y - point2.getY();
	Point2D tmp(a,b);
	return tmp; 
}*/
float Point2D::operator-(Point2D &point2){
	int a = x - point2.getX();
	int b = y - point2.getY();
	float d = pow((pow(a,2)+pow(b,2)),0.5);
	//Point2D tmp(a,b);
	return d; 
}
std::ostream& operator<<(std::ostream& os,Point2D P){
    os << "x = " << P.x <<endl;
    os << "y = " << P.y <<endl;
    return os;	
}/*非Point2D的成員函式，用friend定義的，此處本來就是用來練習friend的外部方法*/
std::istream& operator>>(std::istream& is,Point2D &P){
    cout << "輸入點座標" <<endl;
	is >> P.x >> P.y;
    return is;	
}/*非Point2D的成員函式，用friend定義的，此處本來就是用來練習friend的外部方法*/
double Point2D::gettheta(){
	Point2D p1(x,y);
	double Cos = (double) x/p1.getr();
	//double Sin = (double) y/p1.getr();
	double theta = (double) acos(Cos) * (180.0/M_PI);
	return theta;
}
double Point2D::getr(){
	Point2D p1(x,y);
	Point2D p0;
	float r;
	r = p1 -p0;
	return r;
}
/*
int getxf(Point2D &P){
    return P.x;
}
int getyf(Point2D &P){
    return P.y;
}*/



