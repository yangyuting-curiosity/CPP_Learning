#include <iostream>                                                         
#include<string>
#include <cmath>
#include <math.h> 

using namespace std; //命名空間，告訴編譯器語法要從std底下找尋
 
int main()
{
	cout << "\n" << endl;
	cout << "Mission #0" << endl;
	double radius,area;
	cout << "Please enter radius of a circle." << endl;
	cin >> radius;
	cout << "The circle area is : " << radius * radius * M_PI << "cm^2" << endl;
	cout << "\n" << endl;

	cout << "Mission #1" << endl;
	double a,b;
	cout << "Please enter 2 variable a & b for caculate their sum.." << endl;
	cin >> a >> b;
	cout << "The sum of the 2 variable is : " <<  a + b << endl;
	cout << "\n" << endl;

	cout << "Mission #2" << endl;
	double x,y,z,f;
	cout << "Please enter 3 variable for caculate function f ." << endl;
	cin >> x >> y >> z;
	f = (1.0/6.0) * (pow(x,2)+35+2*pow(y,2)+3*z);
	cout << "The output value of the function f is : " << f << endl; 
	cout << "\n" << endl;

	return 0;  // 回傳0，告訴外界（作業系統）城市順利結束。
                // 另外還有其他的錯誤判斷的寫法，告訴程式什麼情況回傳什麼

}
