#pragma once
#include "Rectangle.h"
#include "Vertex.h"
//היי
 //יונתן
//const auto MAX_COL = 70;
//const auto MAX_ROW = 50;

Rectangle::Rectangle(const Vertex& bottomLeft, const Vertex& topRight)
{
	if (bottomLeft.isValid() && topRight.isValid())
	{

	}

	if (topRight.isHigherThan(bottomLeft))
	{

	}

	 if(isToTheRightOf(const Vertex & other) const

	x_r = topRight.m_col;
	y_r = topRight.m_row;
	x_l = bottomLeft.m_col;
	y_l = bottomLeft.m_row;

	
}

Rectangle::Rectangle(const Vertex veertices[2])
{
	x_r = veertices[0].m_col;
	y_r = veertices[0].m_row;
	x_l = veertices[1].m_col;
	y_l = veertices[1].m_row;
};

Rectangle::Rectangle(double x, double y, double width, double height)
{
	x = x_l;
	y = y_l;
	width = getWidth();
	height = getHeight();

};

Rectangle::Rectangle(const Vertex& topRight, double width, double height)
{
	x_r = topRight.m_col;
	y_r = topRight.m_row;

	width = getWidth();
	height = getHeight();
	
};




 

















//=============================================================
double Rectangle::getHeight() const
{
	return (y_l - y_r);
}

double Rectangle::getWidth() const
{
	return (x_r - x_l);
}

Vertex Rectangle::getTopRight() const
{
	return Vertex(x_r,y_r);
}
