#include <iostream>                                                         
#include<string>
 
using namespace std; //命名空間，告訴編譯器語法要從std底下找尋
 
int main()
{
	cout << "Practice #1" << endl;
	cout << "Name\t:Score\nJohn\t:83\nDavid\t:75\nLinda\t:85\nWei\t:100\n" << endl; 


	cout << "Practice #2" << endl;	
	cout << "What's your name?" <<endl;
	string name;
	//cin >> name;
	getline(cin,name);
	cout << "Hello," << name << " nice to meet you in C++ class." << endl;

                 
	return 0;  // 回傳0，告訴外界（作業系統）城市順利結束。
                // 另外還有其他的錯誤判斷的寫法，告訴程式什麼情況回傳什麼

}
