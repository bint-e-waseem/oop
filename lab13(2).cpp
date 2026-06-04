#include<iostream>
using namespace std;
class device{
	private:
		string deviceId;
	public:
		device()
		{
			cout << "device constructor " << endl;
		}
		void showID()
		{
			cout << "device ID  " << endl;		
	}
};  
    class smartlight :virtual public device
    {
    	public:
    		 smartlight()
    		 { 
    		 cout<<"smartlight constructor"<<endl;
    		 }
    	void adjustbrightness()
    	{
    		cout<<"brightness adjusted"<<endl;
		}
};
    class smartfan : virtual public device
    {
    public:
	    smartfan()	
    	{
    		cout<<"smartfan constructor"<<endl;
		}
    void adjustspeed()	
    	{
    		cout<<"speed adjusted"<<endl;
		}	
	};
	class smartcombo :public smartlight,public smartfan
{
	
	public:
    smartcombo()
    { 
     cout<<"smartcombo constructor"<<endl;
	}
};
int main()
    {
    smartcombo sc;
	sc.showID();	
    	
	}