#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		A()
		{
			cout << "A()" << endl;
			a = 10;	
		}	
		
		void printA()
		{
			cout << "a in class A is : " << a << endl;
		}
		
		~A()
		{
			cout << "~A()" << endl;
		}
};

class B: private A
{
	private:
		int b;
	
	public:
	B()
	{
		cout << "B()" << endl;
		b = 20;	
	}	
	
	void printB()
	{
		cout << "b in class B : " << b << endl;	
	}
	
	~B()
	{
		cout << "~B()" << endl;
	}

};

class C : public B
{
	private:
			int c;
			
	public:
		C()
		{
			cout << "C()" << endl;
			c = 30;
		}
		
		void printC()
		{
			cout << "c in Class C : " << c << endl;
		}
		
		~C()
		{
			cout << "~C()" << endl;
		}

};
int main()
{
	C obj;
		
	obj.printC();
	return 0;
}
