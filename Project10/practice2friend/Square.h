// Square.h
#pragma once
//#ifndef SQUARE_H_INCLUDED
//#define SQUARE_H_INCLUDED
// (1)此處寫的'friend'用法，是目的讓Ruler可以使用Square的private下的成員len。
// (2)測試過 friend class 類別名稱;此行可以寫在private or public下面都OK.

class Square{
	private:
		int len;
		friend class Ruler;
	public:
		Square();
		Square(int);
		int getLen();
		int area();
		//friend class Ruler;
};

//#endif
