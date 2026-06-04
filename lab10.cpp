/*You are required to design an employee salary evaluation system using
inheritance and polymorphism. Create base class Employee with following
attributes and functions:
?Data members (protected):
?string name
?int id
?Member functions:
?A constructor to initialize data members
?virtual double getSalary() {}
?A function void showInfo() to display employee name and id
Create Three Derived Classes. Each class must inherit publicly 
from Employee and override getSalary().
Teacher
?Additional attribute: double payPerHour, int hours
?getSalary() returns: payPerHour * hours
Manager
?Additional attribute: double fixedSalary, double bonus
?getSalary() returns: fixedSalary + bonus
Staff
?additional attribute: double monthlySalary
?getSalary() returns: monthlySalary
In main()
1.Declare a base class reference Employee* emp;
2.Create objects of child classes, assign each object to the base-class reference and make a call to getSalary(). Observe that the correct version of getSalary() executes for each object.
Expected Output (Example)
Employee: Ali (ID: 101)
Salary: 45000
Employee: Sara (ID: 201)
Salary: 85000
Employee: Hamza (ID: 301)
Salary: 30000*/
#include<iostream>
using namespace std;
class Employee
{
   protected:
   string name;
   int id;
   public:
   Employee()
   	{
   		name = "";
   		id = 0;
    }
   Employee(string n,int i)
   {
   	name = n;
   	id = i;
   }
   virtual double getSalary() 
   {
   	return 0.0;
   }
   void showinfo()
   {
   	cout << "ID of an employee is :  " << id << endl;
   	cout << "Name of an employee is : " << name << endl;
   }
};
class teacher : public Employee
{
	double payperhour;
	int hours;
	public :
		teacher(string n,int i,int p, int h):Employee(n,i)
		{
			payperhour = p;
			hours = h;
		}
		double getSalary()
		{
			cout << "--------------------------" << endl;
			return payperhour*hours;
		}
};
class Manager : public Employee
{
  double bonus;
  double fixedSalary;
  public:
  	Manager(string n,int id,double fs,double b): Employee(n,id){
			fixedSalary = fs;
			bonus = b;
		}
  	
   	double getSalary()
   	{
   		cout << "----------------------"<< endl;
   		return fixedSalary + bonus;
    }
};
class Staff : public Employee
{
	double monthlySalary;
	public :
		Staff(string n,int id,double ms) : Employee(n,id)
		{
			monthlySalary = ms;
		}
		double getSalary ()
		{
			return monthlySalary;
		}
		
};
int main()
{
	Employee *emp;
	teacher t("Ali",234,678,890);
	Manager m("Haseen",7890,234,8976);
	Staff s("Sara",567,8900);
	emp = &t;
	emp->showinfo();
	cout << "salary is: " << emp->getSalary() << endl;
	emp = &m;
	emp->showinfo();
	cout << "salary is: " << emp->getSalary() << endl;
	emp = &s;
	emp->showinfo();
	cout << "salary is: " << emp->getSalary() << endl;
	return 0;
}
