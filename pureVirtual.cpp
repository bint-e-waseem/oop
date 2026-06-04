#include<iostream>
using namespace std;

class Payment
{
	public:
		virtual void pay() = 0;  // pure virtual function
		
		void show()
		{
			cout << "show() in Payment class." << endl;	
		}	
};

class CreditCard : public Payment
{
	public:
		void pay() override
		{
			cout << "Payment through credit card ... " << endl;	
		} 	
};

class DebitCard : public Payment
{
	public:
		void pay() override
		{
			cout << "Payment through devit card .... " << endl;	
		}	
};

int main()
{
	Payment *p = new DebitCard;
	p->pay();
	p->show();
	
	
	DebitCard d;
	d.pay();
	d.show();
	return 0;
}



