#ifndef SHAPES_H
#define SHAPES_H

#include "point.h"

class Shape{

	virtual ~Shape() = default;		//virtual default constructor

	virtual bool contains(const Point & p) const = 0;
};

class Rectangle: public Shape{//not abstract, they must override all Shapes pure virtual functions
	private:
	public:
};
class Ellipse: public Shape{//not abstract, they must override all Shapes pure virtual functions
	private:
		float radius;
	public:
};
class Square: public Rectangle{
	public:
};
class Circle: public Ellipse{
	public:
};/

#endif  // SHAPES_H
