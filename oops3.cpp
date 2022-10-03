#include<iostream>
using namespace std;
class person
{
	private:
		int age;
		char name[7];
		
    public:
    	void setData();
    	void displayData();
};
void person:: setData()
{
	cout<<"enter name of the person";
	cin>>this->name;
	cout<<"enter age of the person";
	cin>>this->age;
}
void person:: displayData()
{
	cout<<"\nname:"<<name;
	cout<<"\nage:"<<age;
}
int main()
{
   person p;
    p.setData();
	p.displayData();
	return 0;
};
