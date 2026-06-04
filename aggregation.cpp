#include<iostream>
using namespace std;
class Book
{
	private:
			string title;
			string author;
	public:
			Book()
			{
				
			}
			void Input(string t, string a)
			{
				title = t;
				author = a;
			}
			
			void Print()
			{
				cout << "Book Title : " << title << " -- Author : "<< author << endl;
			}
		
};

class Teacher
{
	private:
		string name;
		string designation;
	public:
		Teacher()
		{
			
		}
		void Input(string n, string d)
		{
			name = n;
			designation = d;
		}
		void Print()
		{
			cout << " Teacher Name : " << name << " -- Designation : " << designation << endl; 
		}
};

class Course
{
	private:
		string title;
		Book b;			// instance variable
		Teacher t;
	
	public:
		Course(string title, string book_title, string author, string teacher_name, string designation)
		{
			this->title = title;
			b.Input(book_title, author);
			t.Input(teacher_name, designation);
		}
		
		void print()
		{
			cout << "Course Title : " << title << endl;
			b.Print();
			t.Print();
		}
};
int main()
{
	Course C("OOP", "Learn C++", "Tonny Gaddis", "Marcin", "Professor");
	
	C.print();
	return 0;
}

