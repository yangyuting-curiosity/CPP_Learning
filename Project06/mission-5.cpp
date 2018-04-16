#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // 動態記憶體配置需要malloc()
using namespace std;

void compare(double x,double y,double z,double &cosA,double &cosB,double &cosC,double &sinA,double &sinB,double &sinC){

	cosA = (pow(b,2)+pow(c,2)-pow(a,2))/ 2*b*c;	
	cosA = (pow(b,2)+pow(c,2)-pow(a,2))/ 2*b*c;	
	cosA = (pow(b,2)+pow(c,2)-pow(a,2))/ 2*b*c;	
	cosA = (pow(b,2)+pow(c,2)-pow(a,2))/ 2*b*c;	
	cosA = (pow(b,2)+pow(c,2)-pow(a,2))/ 2*b*c;	
	cosA = (pow(b,2)+pow(c,2)-pow(a,2))/ 2*b*c;	

}
int main(){
	
	cout << "\n" << endl;
    cout << "Mission #0" << endl;
	double a,b,c,cosA,cosB,cosC,sinA,sinB,sinC;
	cout << "Please input 3 length of triangle.." << endl;
	cin >> a >> b >> c;
	cout << "The cosin of the triangle. :  " << compare(a,b,c,cosA,cosB,cosC,sinA,sinB,sinC) << endl;
	cout << "The sine of the triangle. :  " << compare(a,b,c,cosA,cosB,cosC,sinA,sinB,sinC) << endl;
    cout << "\n" << endl;

    return 0;

}
