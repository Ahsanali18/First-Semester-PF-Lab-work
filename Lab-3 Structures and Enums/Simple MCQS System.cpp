#include<iostream>
#include<conio.h>
using namespace std;
struct MCQSTest{
	string Sname;
	int Sage;
	int ans,wrong;
};
int main()
{
	
	MCQSTest M;
	int a=0,b=0,count=0;
	string input;
	char i;	
	cout<<"\t\t\tThe Daily Quiz ";
	cout<<"\nPress Enter to start the Quiz... ";
	i=getch();
	if(i=='\r')
	{
		cout<<"\nWhat is Your Name? ";
		cin>>M.Sname;
		cout<<"\nHow Old are You? ";
		cin>>M.Sage;
		cout<<"\nAre you ready to take the quiz "<<M.Sname<<" ? yes/no ";
		cin>>input;
		if(input=="yes")
		{
		cout<<"\nGood Luck!";
		system("cls");
		for(int i=1; i<=5; i++)
		{	
			cout<<"\nQuestion No."<<i;
			if(i==1)
			{
			cout<<"\nWhich of the following is logical-And Operator in C++ ";
			cout<<"\n01.&&  02.|| 03.{} 04. ^ \n";
			cin>>M.ans;
			if(M.ans==1)
			a++;
			else 
			b++;
			}
			if(i==2)
			{
			cout<<"\nWhich of the following is logical-Or Operator in C++ ";
			cout<<"\n01.&&  02.|| 03.{} 04. ^ \n";
			cin>>M.ans;
			if(M.ans==2)
			a++;
			else 
			b++;
			}
			if(i==3)
			{
			cout<<"\nThe size of an int Datatype is/are ";
			cout<<"\n01. 4-bytes  02. 8-bytes 03. 2-bytes 04. 1-bytes \n";
			cin>>M.ans;
			if(M.ans==1)
			a++;
			else 
			b++;
			}
			if(i==4)
			{
			cout<<"\nIs it Possible to store the value of string in single quote:\n";
			cout<<"\n01.Yes 02.No 03.None 04.A.O.T \n";
			cin>>M.ans;
			if(M.ans==1)
			a++;
			else 
			b++;
			}
			if(i==5)
			{
			cout<<"\nCan we use a for word as an identifier (or) To give the name to the variables ";
			cout<<"\n01.Yes 02.No 03.None 04.A.O.T \n";
			cin>>M.ans;
			if(M.ans==2)
			a++;
			else 
			b++;
			cout<<"*******************Your Result:****************************";
			cout<<"\nTotal Questions="<<i;
			}		
}
			cout<<"\nCorrect Answers: "<<a;
			cout<<"\nWrong Answers: "<<b;
			if(a>2)
			cout<<"\nCongratulations....!(keep it up)";
			else
			cout<<"\nBad Luck....! (Try to Work Hard)";
	}
		else
		cout<<"Exit";

}
}

