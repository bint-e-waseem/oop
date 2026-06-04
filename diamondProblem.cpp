#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		
		Person()
		{
			cout << "Person()" << endl;	
		}	
		~Person()
		{
			cout << "~Person()" << endl;
		}
};

class Teacher :  public Person
{
	public:
			Teacher()
			{
				cout << "Teacher()" << endl;
			}
			~Teacher()
			{
				cout << "~Teacher()" << endl;
			}
};
class Researcher : virtual public Person
{
	public:
		Researcher()
		{
			cout << "Researcher()" << endl;
		}
		~Researcher()
		{
			cout << "~Researcher()" << endl;
		}
};

class Professor : public Teacher, public Researcher
{
	public:
		Professor()
		{
			cout  << "Professor()" << endl;			
		}
		
		~Professor()
		{
			cout << "\n\n\n~Professor()" << endl;
		}
};

int main()
{
	Professor p;

	p.Teacher::name = "Marcin";
	cout << p.Teacher::name << endl;
	
	p.Researcher::name = "Florian";
	cout << p.Researcher::name << endl;
	
	
	return 0;
}

