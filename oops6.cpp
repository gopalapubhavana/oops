#include<iostream>
#include<iomanip>
using namespace std;
inline float mul(float x,float y)
{
	return(x*y);
}
inline double div(double p,double q)
{
	return(p/q);
}
int main()
{
	float a =12.3445;
	float b =9.82;
	cout<<mul(a,b)<<"\n";
	cout<<div(a,b)<<"\n";
	return 0;
	}
