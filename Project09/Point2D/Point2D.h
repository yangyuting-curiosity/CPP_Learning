// Point2D.h
//#ifdef POINT2D_H_INCLUDED
//#define POINT2D_H_INCLUDED

class Point2D{
	private:
		int x;
		int y;
	public:
		Point2D();  		//initialize value
		Point2D(int,int);	//initialize value 
		void setX(int);
		void setY(int);
		int getX();
		int getY();
		Point2D operator+(Point2D &); //重載+運算子
		Point2D operator-(Point2D &); //重載-運算子
};

//#endif
