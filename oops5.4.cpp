#include<iostream>
using namespace std;
class item
{
	private:
		    static int count;
		    int number;
	public:
		   void getData(int a)
		   {
		   	number = a;
		   	count ++;
		   }
		   void getcount(void)
		   {
		   	cout<<"count: ";
		   	cout<<count<<"\n";
		   }
};
int item :: count;
int main()
{
	item a,b,c;
	a.getcount();
	b.getcount();
	c.getcount();
	a.getData(100);
	b.getData(200);
	c.getData(300);
	cout<<"after reading data"<<"\n";
	a.getcount();
	b.getcount();
	c.getcount();
	return 0;
}
