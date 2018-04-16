#include <iostream>
#include <iomanip> //
#include <string.h> 
#include <fstream>
using namespace std;

int main () {
    string str;
    ifstream ifile;
    cout << "Please enter the filename." << endl;
    cin >> str;
    ifile.open(str);
	int arr[52]={0}; // 此陣列放[大寫26,小寫26]的累計值。
    if (ifile)
    {
        //cout <<"The content on the "<<str<<" is ......" << endl;
        while (getline (ifile,str) ){
            //cout << str << endl;
			for (char c : str){
				if (65<=int(c) && int(c)<=90){
					arr[int(c)-65] +=1;
				}else if(97<=int(c) && int(c)<=122){
					arr[int(c)-71] +=1;
				}else {continue;}
			}
        }
        cout << "Finish reading data from Test.txt" << endl;
		cout << "The amount of each alphbet from the txt file is : " << endl;
		for(int i=0;i<52;i++){
		cout << (char) arr[i]+65 <<" : " << arr[i]<< endl;	
		}
    }
    else
    {
        cout << "Error, no file named "<< str <<endl;
    }
    ifile.close();
    return 0;
}




