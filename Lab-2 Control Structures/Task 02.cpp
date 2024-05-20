#include<iostream>
using namespace std;
int main()
{
	float noOfClassesHeld, noOfClassesAttended;
	float per;
	
	cout<<"Ener Total No Of Classes Held: "; cin>>noOfClassesHeld;
	cout<<"Enter Total No Of Classes Attended: "; cin>>noOfClassesAttended;
	
	per=(noOfClassesAttended/noOfClassesHeld)*100;
	cout<<"Percentage of classes attended: "<<per<<"%"<<endl;
	
	if(per>0)
	{
		if(per>0 && per<75)
		{
			cout<<"You are not eligible to sit in exam ";
		}
		else if(per>75 && per<100)
		{
			cout<<"You are Eligible to sit in exam. ";
		}
	}
}
