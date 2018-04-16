// Ruler.h
#pragma once
#include "Square.h" // 此行重要！！
// 在一個類別使用另一個類別時，一定要include
class Ruler{
	private:
		int len;		
	public:
		Ruler(int);
		void compareSquare(Square &,Square &);
};
