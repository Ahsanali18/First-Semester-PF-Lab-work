#include<iostream>
#include<unistd.h>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
	int num,b,n1;
	string O,store;
	char x;
	cout<<"\t\t\t********Welcome to AB---Restaurant***********\n";
	cout<<1<<".Menu Card\n";
	cout<<2<<".Order an Item with Quantity\n";
	cout<<3<<".Bill Details\n";
	cout<<4<<".Exit\n";
	cin>>num;				
							
	if(num==1 || num==2 || num==3)
	{
		
		if(num==1)
		{
			cout<<"\n\t\t\t\t\tWait Please: ";
			sleep(1);
			cout<<".";
			sleep(2);
			cout<<".";
							
			system("cls");
			cout<<"Menu Card\n";
			cout<<1<<".Burger=Rs:60\n";
			cout<<2<<".Biryani=Rs:50\n";
			cout<<3<<".Roll=Rs:30\n";
			cout<<4<<".Cofee=Rs:40\n";
			cin>>num;
			if(num==1)
			{
			O="Burger";	
			b=60;
		}
			else if(num==2)
			{
			O="Biryani";
			b=50;
		}
			else if(num==3)
			{
			O="Roll";
			b=30;
		}
			else if(num==4)
			{
			O="Cofee";
			b=40;
		}
			cout<<"\nEnter Quantity: ";
			cin>>num;
			cout<<"\t\t\t\t\t\t\t\t\t\t\tOn Process";
			sleep(1);
			cout<<".";
			sleep(2);
			cout<<".";
			sleep(3);
			cout<<".";
			cout<<"\n(Your Order Has been Processed)-->Please Choose the payment Method ";
			cout<<"\n01.Cash\n02.Debit-Card\n03.Jazz-Cash\n04.Easy-Paisa:\n";
			cin>>n1;
			if(n1==1)
			{
				store="Cash";
			}
			else if(n1==2)
			{
				store="Debit-Card";
			}
			else if(n1==3)
			{
				store="Jazz-Cash";
			}
			else if(n1==4)
			{
				store="Easy-Paisa";
			}
			else 
				cout<<"Choose Correct Payment Method ";
			if(n1==1 || n1==2 || n1==3 || n1==4)
			{
			cout<<"Thank you ";
			cout<<"Do You want to see Bill (y/n)";
		}
			x=getch();
			if (x=='y' || x=='Y')
			{
			system("cls");
			cout<<"\t\t\t\t***Bill Details:***" ;
			cout<<endl<<"Item:"<<setw(2)<<O;
			cout<<endl<<"Price:"<<setw(2)<<b;
			cout<<endl<<"Quantity:"<<setw(2)<<num;
			cout<<endl<<"Total Bill: "<<num*b;
			cout<<endl<<"Payment Recieved: "<<num*b;
			cout<<endl<<"Remaining:"<<b*num-b*num;
			cout<<"\nPayment Method: "<<store;
			cout<<"\n\t\t\t..........Thank-You.............";
			cout<<"\n\t\t\t\t\t\t\t\t\t\tExit";
			sleep(1);
			cout<<"\n\t\t\t*";
			sleep(1);
			cout<<"*";
			sleep(1);
			cout<<"*";
			sleep(1);
			cout<<"AB";
			sleep(1);
			cout<<"-RESTURANT";
			sleep(1);
			cout<<"*";
			sleep(1);
			cout<<"*";
			sleep(1);
			cout<<"*";
		}
			else 
			cout<<"\n\t\t\t\t\t\t\t\t\t\tExit";
	}
	else
			cout<<"Please choose the correct startup Procedure: ";		
}
}
