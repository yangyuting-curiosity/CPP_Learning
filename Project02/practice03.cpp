#include <iostream>
#include <cmath>
//#include <iomanip>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	cout << "\n" << endl;
	
	cout << "Mission #0" << endl;
	cout << "Please enter radian for calculate Degree." << endl;
	double radian,Degree;
	cin >> radian;
	Degree = (radian/M_PI) * 180;
	cout << "The Degree is : " << fixed << setprecision(3) << Degree << endl; 
	cout << "\n" << endl;

	cout << "Mission #1" << endl;
	cout << "Please enter an integer number \"n\" to deside the number type." << endl;
	float x;
	cin >> x;
	if ((int)x == x){
		if (x > 0){
			if ((int)x %2 == 0){
				cout << "The entered number \"x\" is \"Even\". " <<endl;
			}else{
				cout << "The entered number \"x\" is \"Odd\"." << endl;
			}
		}else if ( x==0 ){
			cout << "The entered number \"x\" is \"Zero!\"" << endl;
		}else{
			cout << "The entered number \"x\" is \"Negative!\"" << endl;
		}
	}else if((int)x > x && x < (int)x){
		cout << "The entered number \"x\" is float." << endl;
	}else{
		cout << "Error! The entered is not number!"<< endl; 
	}
	cout << "\n" << endl;
	
	cout << "Mission #2" << endl;
	cout << "Please enter your score. "<< endl;
	float y;
	cin >> y;
	if (90<=y && y<=100){
		cout << "The grade is : A." <<endl;
	}else if (80<=y && y<90){
		cout << "The grade is : B." <<endl;
	}else if (70<=y && y<80){
		cout << "The grade is : C." <<endl;
	}else if (60<=y && y<70){
		cout << "The grade is : D." <<endl;
	}else if (0<=y && y<60){
		cout << "The grade is : F." <<endl;	
	}else{
		cout << "Error! Invalid input! " <<endl;
	}
	cout << "\n" << endl;
	
	cout << "Mission #3" << endl;
	cout << "Please enter your score. " << endl;
	float s;
	cin >> s;
	if (s >= 0){
		switch((int)(s/10)){
			case(10):
			case(9):
				cout << "The grade is A." << endl;
				break;
			case(8):
				cout << "The grade is B." << endl;
				break;
			case(7):
				cout << "The grade is C." << endl;
				break;
			case(6):
				cout << "The grade is D." << endl;
				break;
			case(5):
				cout << "The grade is F." << endl;
				break;
			case(4):
				cout << "The grade is F." << endl;
				break;
			case(3):
				cout << "The grade is F." << endl;
				break;
			case(2):
				cout << "The grade is F." << endl;
				break;
			case(1):
				cout << "The grade is F." << endl;
				break;
			case(0):
				cout << "The grade is F." << endl;
				break;
			default:
				cout << "Error! Invalid input! " << endl;
		}
	}else{
		cout << "Error! Invalid input! " << endl;
	}
	cout << "\n" << endl;
	
	//cout << "Mission #4" << endl;
	//cout << "\n" << endl;

	//cout << "Mission #5" << endl;
	//cout << "\n" << endl;

	//cout << "Mission #6" << endl;
	//cout << "\n" << endl;

	//cout << "Mission #7" << endl;
	//cout << "\n" << endl;
	
}


