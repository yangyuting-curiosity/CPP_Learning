// Class 類別
#ifdef TRIANGLE2_H_INCLUDED
#define TRIANGLE2_H_INCLUDED
//#include <iostream>
//#include <stdio.h>

class triangle2{
	private:
        float a;
        float b;
        float c;
        float cosA(float,float,float); //類別triangle的函式宣告
        float cosB(float,float,float);
        float cosC(float,float,float);

    public:
        void setting(float,float,float);
        void print();
        triangle();
        triangle(float,float,float);
        ~triangle();

};

#endif // TRIANGLE2_H_INCLUDED
