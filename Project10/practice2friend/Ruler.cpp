#include <iostream>
//#include <math.h>
#include "Ruler.h"  //重要
#include "Square.h" //重要
using namespace std;

Ruler::Ruler(int a){
	len = a;
} 
void Ruler::compareSquare(Square &s1,Square &s2){
	if (len < s1.len || len < s2.len){
		cout << "尺不夠長，無法測量。" <<endl;
	}else{
		if(s1.len > s2.len){
			cout << "s1面積大於s2" <<endl;
		}else if(s1.len == s2.len){
			cout << "s1面積等於s2" <<endl;
		}else{
			cout << "s1面積小於s2" <<endl;
		}
	}
}
