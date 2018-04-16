#include <iostream>
#include <string.h>
#include "Teacher.h"
//#include "Person.h"
using namespace std;

void Teacher::inputTeacher(){
	inputPerson();
	cout << "Please enter your title." <<endl;
	cin >> Title;
}
void Person::outputTeacher(){
	outputPerson();
	cout << "Your title is "<<Title <<endl;
}

