#include<iostream>
using namespace std;

class TwoD
{
	private:
			double area;
	public:
			TwoD()
			{
				cout << "TwoD()" << endl;
			}
						
			virtual	void getArea()
			{
				cout << "TwoD Area : " <<  area << endl;
			}
			
			void printTwoD()
			{
				cout << "printTwoD()" << endl;
			}			
	
};

class Circle : public TwoD
{
	private:
			double radius;
	public:
		
			Circle(double radius)
			{
				cout << "Circle(double)" << endl;
				this->radius = radius;
			}
			
			void getArea()
			{
				cout << "Circle Area :"  << 3.14 * radius * radius << endl; 
			}
			
			void printCircle()
			{
				cout << "printCircle()" << endl;
			}
};


int main()
{
		
	TwoD* t = new Circle(2);
	t->getArea();
	t->printTwoD();
	t->printCircle();
		
	return 0;
}

