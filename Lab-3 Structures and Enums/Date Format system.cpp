#include<iostream>
#include<conio.h>
using namespace std;
struct DateFormat{
	int DD;
	int MM;
	int YYYY;
};

int main()
{
	DateFormat format;
	format.DD=30;
	format.MM=9;
	format.YYYY=2023;
	
	int num,a=0;
	char key;
	do
	{
		cout<<"Select Date format: \n";
		cout<<1<<".DD-MM-YYYY \n";
		cout<<2<<".MM-DD-YYYY \n";
		cout<<3<<".YYYY-MM-DD \n";
		cin>>num;
		
		if(num==1)
		{
			cout<<"Date Format DD-MM-YYYY is selected: "<<format.DD<<"-"<<a<<format.MM<<"-"<<format.YYYY;
		}
		else if(num==2)
		{
			cout<<"\nDate Format MM-DD-YYYY is selected: "<<a<<format.MM<<"-"<<format.DD<<"-"<<format.YYYY;
		}
		else if(num==3)
		{
			cout<<"\nDate Format YYYY-MM-DD is selected: "<<format.YYYY<<"-"<<a<<format.MM<<"-"<<format.DD;
		}
		cout<<"\nContinue for next selection (y/n): ";
		key=getche();
		cout<<endl;
		if(key=='n')
		{
			cout<<"\nEnd of the Program ";
		}
}
while(key=='y');
return 0;
}
