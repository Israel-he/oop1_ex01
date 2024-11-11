#include <Vertex.h>
class  Rectangle
{
public:
	Rectangle(const Vertex& bottomLeft, const Vertex& topRight);
	Rectangle(const Vertex veertices[2]);
	Rectangle(double x, double y, double width, double height);
	Rectangle(const Vertex& topRight, double width, double height);
	//Vertex::chkIfWithin(const Vertex& other) const;
	bool Vertex::isValid() const;

	double getHeight()  const;
	double getWidth()  const;
	Vertex getTopRight() const;

private:
	double x_l, y_l;
	double x_r, y_r;

};
 