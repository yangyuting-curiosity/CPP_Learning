#include <iostream>
#include <string.h>
//#include "Person"
#include "Student"
#include "Teacher"
using namespace std;

int main(){
	Student s1;
	Teacher t1;

	s1.inputStudent();
	s1.outputStudent();
	cout << endl;

	s2.inputTeacher();
	s2.outputTeacher();
	cout << endl;

	return 0;
}
