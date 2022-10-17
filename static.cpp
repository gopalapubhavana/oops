#include<iostream>
#include<iomanip>
using namespace std;
class Bank
{
	private:
		int accnumber;
		string name;
		float balance;
		static int totalaccounts;
	public:
		Bank();
		void getdata();
		void display();
		static void displaytotalaccounts();
};
int Bank :: totalaccounts;
Bank::Bank()
{
	totalaccounts = totalaccounts+1;
	accnumber = totalaccounts;
	name = " ";
	balance = 0;
}
void Bank::getdata()
{
	cout<<"enter name of the a/c holder :";cin>>name;
	cout<<"enter amount all the time of open :";cin>>balance;
}
void Bank::display()
{
	cout<<endl;
	cout<<"accnumber :"<<setw(10)<<accnumber<<endl;
	cout<<"a/c H.name :"<<setw(10)<<name<<endl;
	cout<<"Balance :"<<setw(10)<<balance<<endl;
}
void Bank :: displaytotalaccounts()
{
	cout<<endl;
	cout<<"SBI,rushikonda"<<endl;
	cout<<"totalaccount holders="<<setw(10)<<totalaccounts<<endl;
}
int main(int argc,char*argv[])
{
	Bank ravi;
	ravi.getdata();
	Bank Balu;
	Balu.getdata();
	cout<<"\n ravi details\n";ravi.display();
	cout<<"\n Balu details \n";Balu.display();
	cout<<endl;
	Bank::displaytotalaccounts();
	return 0;
}
