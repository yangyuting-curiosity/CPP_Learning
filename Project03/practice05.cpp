#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
//#incluse <math.h>
using namespace std;

int main()
{
    cout << "\n" << endl;

    cout << "Mission #0" << endl;
    cout << "Please enter an number \"n\"." << endl;
    int n,result=1;
    cin >> n;
    for (int i = 1 ; i<n ; i++){
        //result = result * i;
        result *= i;
    }
    cout << "The \"n!\" is : " << result << endl;
    cout << "\n" << endl;

    cout << "Mission #1" << endl;
    cout << "Please enter an integer \"x\"." << endl;
    int x;
    cin >> x;
    for (int i = 1; i <= x ; i++){
        if ( x%i == 0){
            cout << "Factor : " << i << endl; //列出所有的因數
        }
    }
    //cout << "The factor of \"x\" is : " << i << endl;
    cout << "\n" << endl;

    cout << "Mission #2" << endl;
    cout << "The Multiplication Table! " << endl;
    for (int i=1 ; i<=9 ; i++) {
        for (int j=1; j<=9 ; j++) {
            cout  << i <<'*'<< j <<'=' << setw(3) << i*j << ' ' ;
        }
        cout << endl;
    }

    cout << "\n" << endl;

    cout << "Mission #3" << endl;
    cout << "Please enter a string." << endl;
    string words;
    cin >> words;
    //getline(cin,words);
    int sum = 0;
    for (char c : words ){
        if (c=='a'){
            sum++;
        }
    }
    cout << "The amount of \"a\" is : " << sum << endl;
    cout << "\n" << endl;

    cout << "Mission #4" << endl; // 設計一個小遊戲
    cout << "Please enter a integer! 判斷是否為一個由四個不同數字組成的數字?" << endl;
    int n0 = 0;
    cin >> n0;
    int n1=0,n2=0;
    bool flag = true;

    for (int i=0 ; i < 4; i++){
        n1 = ((int)(n0/pow(10,i)))%10 ; // 第i位數
        for (int j = i+1 ; j < 4 ;j++){
            n2 = ((int)(n0/pow(10,j)))%10 ; // 第j位數
            if (n1 == n2){
                flag = false;
            }
        }
    }
    if(flag){
        cout << "Right! The nuber is composed of 4 different number." << endl;
    }else{
        cout << "Wrong! The nuber is not composed of 4 different number." << endl;
    }
    cout << "\n" << endl;

    cout << "Mission #5" << endl; // 無窮執行迴圈
    float r;
    for (;1;){
        cout << "Please enter a radius.(0 to quit.)"<< endl;
        cin >> r;
        if (r==0){
            break;  // 跳離最近的「迴圈」
        }else if (r>0){
            cout << "Area : " << r*r*M_PI << endl;
        }else if (r<0){
            cout << "Radius is negative!" << endl;
        }else{
            cout << "Invalid  input !" << endl;
        }
    }
    cout << "\n" << endl;

    cout << "Mission #5-2" << endl;  // 用do-wile loop 來達成
    /*for (;1;){
        cout << "Please enter an integer.(0 to quit.)"<< endl;
        int a;
        cin >> a;
        if (a==0){ break; }
    }*/
    int a;
    do{
        cout << "Please enter an integer.(0 to quit.)"<< endl;
        cin >> a;
    }while(a!=0);
    cout << "\n" << endl;


    cout << "Mission #6" << endl;  // Guess the numer! It's a game.
    cout << "Step #1 - 先判斷是否為正確的「輸入」數,必須為四個不同數字組成的數." << endl; // 設計一個小遊戲
    int answer = 1234;
    int n_0 = 0;
    bool flag2 = true;

    while(flag2){
        cout << "Please enter a integer! 判斷是否為一個由四個不同數字組成的數字?" << endl;
        cin >> n_0;
        int n1=0,n2=0;
        for (int i=0 ; i < 4; i++){
            n1 = ((int)(n_0/pow(10,i)))%10 ; // input value 第i位數
            for (int j = i+1 ; j < 4 ;j++){
                n2 = ((int)(n_0/pow(10,j)))%10 ; // input value 第j=i+1位數
                if (n1 == n2){
                    flag2 = false;
                }
            }
        }
        //cout << "Step #2 - 計算user輸入的數是否與正確答案相符合？" << endl;
        if (flag2){
            if (n_0 != answer){
                // 計算幾A幾B ?
                int A=0,B=0;
                for (int i = 0 ; i < 4; i++){
                    n1 = ((int)(answer/pow(10,i)))%10 ; // answer 第i位數
                    for (int j = 0 ; j < 4 ;j++){
                        n2 = ((int)(n_0/pow(10,j)))%10 ; // input value 第j位數

                        if (n1 == n2){
                            if (i == j){
                                A++;
                            }else{
                                B++;
                            }

                        }
                    }
                }
                cout << A << "A" << B << "B" << endl;
            }else{
                cout << "Your guess is right!" << endl;
            }
        }
    }   cout << "Invalid Input!" << endl;



    cout << "\n" << endl;

    cout << "Mission #7" << endl;

    cout << "\n" << endl;

    return 0;
}
