#include <iostream>  // iostream 代表輸入輸出串流。
#include <stdio.h>  // 屬於Ｃ語言的標準輸入輸出。
#include <cmath>
//#incluse <math.h>
#include <string>
#include <iomanip> //

using namespace std;

int main()
{
    cout << "\n" << endl;
    cout << "Mission #0" << endl;
    cout << "Please enter your radian." << endl;
    double radian,Degree;
    cin >> radian;
    Degree = (radian/M_PI) * 180 ;
    cout << "Your degree is : " << fixed << setprecision(3) << Degree << endl;  // *****
    cout << "\n" << endl;

    cout << "Mission #1" << endl;
    cout << "Please enter an inter number x ." << endl;
    int number;
    cin >> number;
    if (number > 0){
        cout << "The number x is \"Posive\"." << endl;
    }else if (number==0){
        cout << "The number x is \"Zero\"." << endl;
    }else{
        cout << "The number x is \"Negative\"." << endl;
    }
    cout << "\n" << endl;

    cout << "Mission #2" << endl;
    cout << "Please enter an inter number y." << endl;
    int y;
    cin >> y;
    if (y%2 == 0){
        cout << "The number y is \"Even\" " << endl;
    }else{
        cout << "The number y is \"Odd\" " << endl;
    }
    cout << "\n" << endl;

    cout << "Mission #3" << endl;
    cout << "Please enter an inter radius ." <<endl;
    double radius,Area;
    cin >> radius;
    Area = radius * radius * M_PI;
    if (radius > 0){
        cout << "The Area  is : " << Area << endl;
    }else{
        cout << "You give a wrong radius ! " << endl;
    }
    cout << "\n" << endl;

    cout << "Mission #4" << endl;
    cout << "Please enter an  number n. We'll judgment type of the number." << endl;
    float n;
    cin >> n;
    if((int)n == n){
        if (n > 0){
            if ((int)n %2 == 0){
                cout << "The number is  \"Even\" Postive interger ." << endl;
            }else{
                cout << "The number is \"Odd\" Postive interger." << endl;
            }
        }else if (number==0){
            cout << "The number x is \"Zero\"." << endl;
        }else{
            cout << "The number is \"Negative\"." << endl;
        }
    }else{
        cout << "The number is float." << endl;
    }
    cout << "\n" << endl;

    cout << "Mission #5" << endl;
    cout << "" <<endl;
    cout << ""<< endl;
    cout << "\n" << endl;


    return 0;
}
