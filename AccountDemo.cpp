#include<iostream>
using namespace std;

class Account
{
	private:
		int number;
		double balance;
	
	public:
		Account()
		{
			number = 1111;
			balance = 0.0;	
		}	
		
		Account(int n, double b)
		{
			number = n;
			balance = b;
		}
		
		void setNumber(int n)
		{
			number = n;
		}
		
		void setBalance(double b)
		{
			balance = b;	
		}
		
		void deposit(double amount)
		{
			balance += amount;
		}
		
		void withdraw(double amount)
		{
			if(amount <= balance)
				balance = balance - amount;
			else
				cout << "Error: In-sufficient balance " << endl;
		}
		
		double getBalance()
		{
			return balance; 
		}
};

int main()
{
		Account obj[3];
		
		double amount;
		cin >> amount;
		
		obj[0].setNumber(10101);
		
		cout << "Initial balance : " << obj[0].getBalance() << endl;

		obj[0].setBalance(amount);
		cout << "After setting balance : " << obj[0].getBalance() << endl;
			
		obj[0].deposit(500);
		cout << "After depositing balance : " << obj[0].getBalance() << endl;
		
		obj[0].withdraw(274.3);
		cout << "After withdrawing balance : " << obj[0].getBalance() << endl;
	
		return 0;
}












