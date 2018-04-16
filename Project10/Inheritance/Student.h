// Student.h
#pragma once
//#ifndef PERSON_H_INCLUDED
//#define PERSON_H_INCLUDED
using namespace std;
class Student : public Person{
	public:
		void inputStudent();
		void outputStudent();
	private:
		string StudentID;
};

//#endif
