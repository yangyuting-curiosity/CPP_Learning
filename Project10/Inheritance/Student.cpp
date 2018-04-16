#include <iostream>
#include <string.h>
#include "Student.h"
//#include "Person.h"
using namespace std;

void Student::inputStudent(){
	inputPerson();
	cout << "Please enter your StudentID." <<endl;
	cin >> StudentID;
}
void Student::outputStudent(){
	outputPerson();
	cout << "Your StudentID is "<<StudentID <<endl;
}


