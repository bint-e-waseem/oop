/*Design a class called Date. The class should store a date in three integers: month, day, and year. 
There should be member functions to print the date in the form of October 03, 2025. Demonstrate the 
class by writing a complete program implementing it. 

Input Validation: 
Do not accept values for the day greater than 31 or less than 1. 
Do not accept values for the month greater than 12 or less than 1.
*/
#include<iostream>
using namespace std;
class date{
private:
	int month;
	int day;
	int year;
public:
    date(int m =1,int d = 1,int y = 2000)
	{
		setmonth(m);
		setday(d);
		setyear(y);
	}	
	void setday(int d)
	{
		if(d < 1 || d > 31)
		{
			cout << "invalid input.enter again";
		}
		else{
			day = d;
		}
	}
	void setmonth(int m)
	{
		if(m >=1 && m <=12)
		{
			 month = m;
		}
		else{
			cout << "invalid";
		}
	}
	void setyear(int y)
	{
		year = y;
	}
	int getmonth() const{return month;}
	int getday() const{return day;}
	int getyear() const{return year;}
	void printdate() const
	{
		string months[12] = {"january","februry","march","april","may","june","july","august","september","october",
		"november","december"};
		cout << months[month - 1];
		 if(day < 10) {
            cout << " 0" << day;
        } else {
            cout << day;
        }
        
        cout << ", " << year << endl;  // Complete the date format
    }
	
};
int main()
{
	int d,m,y;
	cout << "enter month number: ";
	cin >> m;
	cout << "enter day: ";
	cin >> d;
	cout << "enter year: ";
	cin >> y;
	date mydate(m,d,y);
	cout << " date is  ";
	mydate.printdate();
	return 0;
}
