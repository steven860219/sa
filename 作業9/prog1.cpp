#include <iostream>
#include <cstdlib>
#include <iomanip> 

using namespace std;

class GeometricObject
{
	private:
		string color;
		bool filled;
	public:
		GeometricObject()
		{
			color = "white";
			filled = false;
			cout << "Constructor1" << endl;
		}
		GeometricObject(string &color,bool filled)
		{
			this->color = color;
			this->filled = filled;
			cout << "Constructor2" << endl;
		}
		string getColor(void)
		{
			return color;
		}
		void setColor(string color)
		{
			this->color = color;
		}
		bool isFilled(void)
		{
			return filled;
		}
		void setFilled(bool filled)
		{
			this->filled = filled;
		}
		void toString(void)
		{
			if(filled == 0)
				cout << "Color:" << this->color << " Filled:False" << endl; 
			else
				cout << "Color:" << this->color << " Filled:True" << endl; 
			
		}		
};
class Circle : public GeometricObject
{
	private:
		double radius;
	public:
		Circle()
		{
			radius = 1;
			cout << "CConstructor1" << endl;
		}
		Circle(double radius)
		{
			if(radius < 0)
			{
				cout << "CConstructor2" << endl;
				cout << "Wrong" << endl;				
				this->radius = 0;
			}
			else
			{			
				this->radius = radius;
				cout << "CConstructor2" << endl;
			}			
		}
		Circle(double radius,string &color,bool filled)
		{
			if(radius < 0)
			{
				cout << "CConstructor3" << endl;
				cout << "Wrong" << endl;				
				setColor(color);
				setFilled(filled);
				this->radius = 0;				
			}
			else
			{
				setColor(color);
				setFilled(filled);
				this->radius = radius;	
				cout << "CConstructor3" << endl;			
			}
		}
		double getRadius(void)
		{
			return this->radius;
		}
		void setRadius(double radius)
		{
			if(radius < 0)
			{
				cout << "Wrong" << endl;
				this->radius = 0;
			}
			else
				this->radius = radius;
		}
		double getArea(void)
		{
			return (radius*radius*3.14159);
		}
		double getDiameter(void)
		{
			return (2*radius);
		}
		double getPerimeter(void)
		{
			return (2*radius*3.14159);
		}
		void toString(void)
		{
			cout << "CColor:" << getColor() << " Radius:" << fixed << setprecision(6) << this->radius << endl; 	
			std::cout.unsetf(std::ios_base::floatfield);	
		}		
};
class Rectangle : public GeometricObject
{
	private:
		double width,height;
	public:
		Rectangle()
		{
			width = 1;
			height = 1;
			cout << "RConstructor1" << endl;
		}
		Rectangle(double width,double height)
		{
			if(width < 0 || height < 0)
			{
				
				cout << "RConstructor2" << endl;
				cout << "Wrong" << endl;
				if(width < 0)
				{
					this->width = 0;
					this->height = height;
				}
				if(height < 0)
				{
					this->height = 0;
					this->width = width;
				}
			}
			else
			{
				cout << "RConstructor2" << endl;
				this->width = width;
				this->height = height;				
			}
		}
		Rectangle(double width,double height,string &color,bool filled)
		{
			if(width < 0 || height < 0)
			{
				
				cout << "RConstructor2" << endl;
				cout << "Wrong" << endl;
				if(width < 0)
				{
					this->width = 0;
					this->height = height;
				}
				if(height < 0)
				{
					this->height = 0;
					this->width = width;
				}
				
				setColor(color);
				setFilled(filled);
			}
			else
			{
				cout << "RConstructor2" << endl;
				this->width = width;
				this->height = height;	
				setColor(color);
				setFilled(filled);			
			}
		}
		double getWidth(void)
		{
			return width;
		}		
		double getHeight(void)
		{
			return height;
		}
		void setWidth(double width)
		{
			if(width >= 0)
				this->width = width;
			else
				cout << "Wrong" << endl;
		}
		void setHeight(double height)
		{
			if(height >= 0)
				this->height = height;
			else
				cout << "Wrong" << endl; 
		}
		double getArea(void)
		{
			return (width*height);
		}
		double getPerimeter(void)
		{
			return (2*(width+height));
		}
		void toString(void)
		{
			cout << "Rheight:" << fixed << setprecision(6)  << this->height << " Rwidth:"<< fixed << setprecision(6)  << this->width << endl; 			
			std::cout.unsetf(std::ios_base::floatfield);
		}
};
int main(void)
{
	GeometricObject shape;
 	shape.setColor("red");
 	shape.setFilled(true);
 shape.toString();cout
 	<< "color: " << shape.getColor()
	<< " filled: " << (shape.isFilled() ? "true" : "false") << endl;
 	Circle circle(5);
 	circle.setColor("black");
 	circle.setFilled(false);
 	circle.toString();
 	cout << "color: " << circle.getColor()
 	<< " filled: " << (circle.isFilled() ? "true" : "false")
 	<< " radius: " << circle.getRadius()
 	<< " area: " << circle.getArea()
 	<< " perimeter: " << circle.getPerimeter() << endl;
 	Circle circle1(-5);
 circle1.setColor("black");
 circle1.setFilled(false);
circle1.toString();
 cout<< "color: " << circle1.getColor()
 << " filled: " << (circle1.isFilled() ? "true" : "false")
 << " radius: " << circle1.getRadius()
 << " area: " << circle1.getArea()
 << " perimeter: " << circle1.getPerimeter() << endl;
string strc("red");
 Circle circle2(2.5, strc, false);
 circle2.setColor("black"); 
 circle2.setFilled(false);
 circle2.toString();
 cout << "color: " << circle2.getColor()
 << " filled: " << (circle2.isFilled() ? "true" : "false")
 << " radius: " << circle2.getRadius()
 << " area: " << circle2.getArea()
 << " perimeter: " << circle2.getPerimeter() << endl;
 Rectangle rectangle(2, 3);
 rectangle.setColor("orange");
 rectangle.setFilled(true);
 rectangle.toString();cout
 << "color: " << rectangle.getColor()
 << " filled: " << (rectangle.isFilled() ? "true" : "false")
 << " width: " << rectangle.getWidth()
 << " height: " << rectangle.getHeight()
 << " area: " << rectangle.getArea()
 << " perimeter: " << rectangle.getPerimeter() << endl;
 Rectangle rectangle1(2, 0);
 rectangle.setColor("orange");
 rectangle.setFilled(true);
  rectangle1.toString();cout
 << "color: " << rectangle1.getColor()
 << " filled: " << (rectangle1.isFilled() ? "true" : "false")
 << " width: " << rectangle1.getWidth()
 << " height: " << rectangle1.getHeight()
 << " area: " << rectangle1.getArea()
 << " perimeter: " << rectangle1.getPerimeter()<<endl;
 
 return 0;
}
