/*TASK#04
Write a C++ program to declare an integer variable Hours and assings it a value of your choice and Convert Hours
in ters of minutes automatically:
				Hint=(hour=1 , Minutes=60)


				"Starting Of Program" */

#include<iostream>
using namespace std;
int main()
{	
	int Hours;
	cout<<"Insert the number of Hours:";
	cin>>Hours;
	
	int minutes=Hours*60;    		 //:1hour=60min
	cout<<"Equivalent Minutes: "<<minutes;
	return 0;
	
}

					//"THE END"

