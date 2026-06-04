#include<iostream>
using namespace std;
class Shape{
	private:
			int area;
	public:
			Shape()
			{
				cout << "Shape()" << endl;
				area = 0;
			}
			
			virtual void getArea()
			{
				cout << "getArea() in Shape class: " << area << endl;
			}
			
			void printShape()
			{
				cout << "printShape()" << endl;
			}
	
};
class Circle : public Shape{
	
	private:
		double radius;
		double area;
	public:
				
		Circle(double rad)
		{
			cout << "Circle(double)" << endl;
			radius = rad;
		}
		
		void getArea()
		{
			cout << "Area of circle : " << 3.14*radius*radius << endl;	
		}
		
		void printCircle()
		{
			cout << "printCircle()" << endl;
		}

};

int main()
{
    Shape* s1 = new Circle(3);
    Shape* s2 = new Shape;

    Circle* c1 = dynamic_cast<Circle*>(s1);
    Circle* c2 = dynamic_cast<Circle*>(s2);

    if(c1) c1->getArea();
    else cout << "c1 nullptr" << endl;

    if(c2) c2->getArea();
    else cout << "c2 nullptr" << endl;

    return 0;
}
