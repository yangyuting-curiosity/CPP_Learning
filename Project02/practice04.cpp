#include <iostream>  // iostream 代表輸入輸出串流。
//#include <stdio.h>  // 屬於Ｃ語言的標準輸入輸出。
#include <cmath>
//#incluse <math.h>
#include <string>
#include <iomanip> //

using namespace std;

int main()
{
    cout << "\n" << endl;
    cout << "Mission #1" << endl;
    cout << "Please enter score." << endl;
    float x;
    cin >> x;
    if (x>=90 && x<=100){
        cout << "The grade is : A." << endl;
    }else if(x>=80 && x<90){
        cout << "The grade is : B." << endl;
    }else if(x>=70 && x<80){
        cout << "The grade is : C." << endl;
    }else if(x>=60 && x<70){
        cout << "The grade is : D." << endl;
    }else if (x>=0 && x<60){
        cout << "The grade is : F." << endl;
    }else{
        cout << "Error! You input a wrong score." << endl;
    }
    cout << "\n" << endl;

    cout << "Mission #2" << endl;
    cout << "Please enter score." << endl;
    float y;
    cin >> y;
    switch (int(y/10)){
        case (10) :
            cout << "The grade is : A." << endl;
            break;
        case (9) :
            cout << "The grade is : A." << endl;
            break;
        case (8) :
            cout << "The grade is : B." << endl;
            break;
        case (7) :
            cout << "The grade is : C." << endl;
            break;
        case (6) :
            cout << "The grade is : D." << endl;
            break;
        case (5) :
            cout << "The grade is : F." << endl;
            break;
        case (4) :
            cout << "The grade is : F." << endl;
            break;
        case (3) :
            cout << "The grade is : F." << endl;
            break;
        case (2) :
            cout << "The grade is : F." << endl;
            break;
        case (1) :
            cout << "The grade is : F." << endl;
            break;
        case (0) :
            cout << "The grade is : F." << endl;
            break;
        default:
            cout << "Error! You input a wrong score." << endl;

    }
    cout << "\n" << endl;

    cout << "Mission #3" << endl;
    cout << "Please enter a character : " << endl;
    char ch ;
    cin >> ch;
    switch (ch){
        case 'a':
            cout << "You input character is : " << ch << endl;
            break;
        case 'b':
            cout << "You input character is : " << ch << endl;
            break;
        case 'c':
            cout << "You input character is : " << ch << endl;
            break;
        default:
            cout << "You input character is not a or b or c"  << endl;
    }
    cout << "\n" << endl;

    return 0;
}
