// Point2D.cpp
#include "Point2D.h"
#include <iostream>
#include <cmath>
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
Point2D Point2D::operator-(Point2D &point2){
	int a = x - point2.getX();
	int b = y - point2.getY();
	Point2D tmp(a,b);
	return tmp; 
}

