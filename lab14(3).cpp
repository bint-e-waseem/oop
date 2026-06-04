/*An organization has different types of employees. Every employee has an Employee ID, Salary,
and Rank. Their calculation varies for different types of employees, therefore these functions 
shall be declared as pure virtual in the base class.
Create base class Employee with following attribute and functions:
•	string empID
•	Constructor printing "Employee constructor"
•	void showID()
•	virtual int getSalary() = 0;
•	virtual string getRank() = 0;
•	virtual void status()
Create class Developer : public Employee
•	Constructor printing "Developer constructor"
•	Override:
	getSalary()
	getRank()
	status()
Create class Manager : public Employee
•	Constructor printing "Manager constructor"
•	Override:
	getSalary()
	getRank()
	status()
Create class TechLead : public Developer, public Manager
•	Constructor printing "TechLead constructor"
In main()
1.	Ambiguity Demonstration
TechLead tl;
tl.showID();   // should cause ambiguity
2.	Fix Ambiguity Using Virtual Inheritance	
Modify the inheritance as follows:
class Developer : virtual public Employee {};
class Manager   : virtual public Employee {};
Now the following code should work correctly:
TechLead tl;
tl.showID();   // ambiguity resolved

3.	Polymorphism Using Base Class Pointer
Add the following in main():
Employee* e = new TechLead();
e->status();
cout << "Salary: " << e->getSalary() << endl;
cout << "Rank: " << e->getRank() << endl;
*/
#include<iostream>
using namespace std;
class employee{
	private:
		string empID;
	public:
		employee()
		{
			cout << "constructor Printing" << endl;
		}
		void showID()
		{
			cout << "Employee ID" << endl;
		}
		virtual int getsalary() = 0;
		virtual string getrank() = 0;
		virtual void status()
		{
			
		}
};
class developer :virtual public employee{
	public:
		developer()
		{
			cout << "developer constructor" << endl;
		}
	    int getsalary() override{
	    	return 5000;
		}
		string getrank() override{
			return "developer rent override ";
		}
		void status() override{
			cout << "developer status " << endl;
		}
};
class manager:virtual public employee{
	public:
		manager() 
		{
			cout << "manager constructor " << endl;
		}
		int getsalary() override{
			return 1000;
		}
		string getrank() override{
			return "manager";
		}
		void status() override{
			cout << "manager status " << endl;
		}
};
class techlead:public developer,public manager
{
	public:
		techlead()
		{
			cout << "techlead constructor " << endl;
		}
		int getsalary() override{
			return 6000;
		}
		string getrank() override{
			return "techlead";
		}
		void status() override{
			cout << "tech lead status" ;
		}
};
int main()
{
	techlead tl;
	tl.showID();
	employee *e = new techlead;
	e->status();
	cout << "salary " << e->getsalary() << endl;
	cout << "rank" << e->getrank() << endl;
	delete e;
}
