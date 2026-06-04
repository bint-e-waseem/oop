#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int width;
	public:
		Rectangle()	
		{
			cout << "default constructor" << endl;
		}
		Rectangle(int length, int width)
		{
			cout << "Param constructor " << endl;
			this->length = length;
			this->width = width;
			
			// this pointer refers to the current object
		}
		void display()
		{
			cout << "display()" << endl;
			cout << "Length : " <<this->length << endl;
			cout << "Width : " << this->width << endl;
		}
		Rectangle operator+(const Rectangle &R)
		{
			length = length + R.length; // b = b+c
			width = width + R.width;
			return *this;
		}
		bool operator>(const Rectangle &R)
		{
			bool flag;
			if(length > R.length && width > R.width)
				flag = true;
			else
				flag = false;
			return flag;
		}
		Rectangle operator=(const Rectangle &R)
		{
			length = R.length;
			width = R.width;
			return *this;
		}
		Rectangle operator++() 
		{
			++length;
			++width;
			
			return *this;
		}
		Rectangle operator++(int)
		{
			length++;
			width++;
			
			return *this;
		}
};
int main()
{
	Rectangle obj1(10, 20);
	Rectangle obj2(30, 40);
	Rectangle obj3;		
	obj3 = ++obj1;
	obj3 = obj1++;
	cout << "------------------- \n";
	obj3.display();
	cout << "-------------------\n";
    obj3 = obj1 = obj2;		// a = b = c
	
	return 0;
}
