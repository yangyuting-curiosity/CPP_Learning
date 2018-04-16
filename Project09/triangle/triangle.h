// Class 類別 
//#ifdef TRIANGLE_H_INCLUDED
//#define TRIANGLE_H_INCLUDED
//#include <iostream>
//#include <stdio.h>

class triangle{
	private:
		float a;
		float b;
		float c;
	public:
		float cosA(); //類別triangle的函式宣告
		float cosB();
		float cosC();
		triangle(float,float,float);
		triangle();
		~triangle();
		void print();
		triangle operator+(triangle &);
};

//#endif



