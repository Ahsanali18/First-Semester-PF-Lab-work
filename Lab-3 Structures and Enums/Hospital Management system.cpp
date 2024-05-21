#include<iostream>
#include<iomanip>
#include<conio.h>
#include<unistd.h>
using namespace std;
struct Patients{
	string patientname;
	int patientage;
	string disease;
	long mobilenumber;
};
struct HospitalManagement{
	string username;
	string doctorsname;
	Patients P;
};
int main()
{
	HospitalManagement Hospital;
	int patient=0,ser=1;
	string password="";
	char pass,alpha;
	cout<<"((((((((((((((------------------Hospital Management System--------------------)))))))))))))))";
	cout<<"\nEnter User Name: ";
	getline(cin,Hospital.username);
	cout<<setw(5)<<"Enter Password: ";
	for(int i=1; i<=5; i++)
	{
		pass=getch();
		password+=pass;
		cout<<"*";
	}
							cout<<"\t\t\t\t\tLoading";
							sleep(1);
							cout<<".";
							sleep(2);
						 	cout<<".";
							sleep(3);
							cout<<".";
	if(Hospital.username=="Ali" && password=="12345")
	{
	system("cls");
	do{
	cout<<"\nPatient 0"<<ser<<" Name:";
	cin>>Hospital.P.patientname;
	cout<<"Patient Age: ";
	cin>>Hospital.P.patientage;
	cout<<"Related Disease: ";
	cin>>Hospital.P.disease;
	cout<<"Tell me Your Mobile Number: ";
	cin>>Hospital.P.mobilenumber;
	patient++;
	cout<<"\nYour Appoitment is booked ";
	ser++;
	getch();
	system("cls");
	
	}
	while(patient<=4);
	}
	else 
	cout<<"Please-Enter-Valid-User-name Or Password: ";	
}

