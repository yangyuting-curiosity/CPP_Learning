#include <iostream>
#include <string.h>
#include "Person.h"

using namespace std;

void Person::inputPerson(){
	cout << "Please enter your name." <<endl;
	cin >> Name;
}
void Person::outputPerson(){
	cout << "Your name is "<<Name <<endl;
}

