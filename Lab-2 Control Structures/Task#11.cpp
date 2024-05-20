#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the value of x: "; cin>>x;
	cout<<"Enter the value of y: "; cin>>y;
	
	if(x>y)
	{
		cout<<"x is Greater";
	}
	else if(y>x)
	{
		cout<<"y is Greater ";
	}
	else
	{
		cout<<"Both numbers are equal try again";
	}
	return 0;
}
