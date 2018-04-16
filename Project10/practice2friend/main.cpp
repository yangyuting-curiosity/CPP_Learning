#include <iostream>
#include <math.h>
#include "Square.h"
#include "Ruler.h"

using namespace std;

int main(){
	
	Square s1(10);
	Square s2(20);
	Ruler r(30);
	
	cout <<"s1: len = "<<s1.getLen()<<", area = "<<s1.area()<<endl;
	cout <<"s2: len = "<<s2.getLen()<<", area = "<<s2.area()<<endl;

	r.compareSquare(s1,s2);

	return 0;
}


