#include <iostream>

using namespace std;

int main()
{
    cout << "\n" << endl;

    cout << "Toy #1" << endl;
    for (int i =1; i<=10 ; i++){
        for (int j =1; j<=i; j++){
            cout << "O" ;
        }
        cout << endl;
    }
    cout << "\n" << endl;

    cout << "Toy #2" << endl;
    for (int i = 0; i<10 ;i++){
        cout << "現在的數字是 : " << i<< endl;
        if (i>=5){ break; }
        cout << "數字小於五"<< endl;
    }
    cout << "\n" << endl;

    cout << "Toy #3" << endl;
    for (char c:"Hello World!"){
        cout << c << endl;
    }
    cout << "\n" << endl;

    cout << "Toy #4" << endl;

    cout << "\n" << endl;

    cout << "Toy #5" << endl;
    cout << "\n" << endl;

    cout << "Toy #6" << endl;
    cout << "\n" << endl;
    return 0;
}
