/*										Task#04(a)
#include<iostream>
using namespace std;
int main()
{
	int anynum;
	cout<<"Enter any number: ";
	cin>>anynum;
	
	if (anynum!=0)
	{
		if(anynum>0)
		cout<<"Postivie # +ve";
		else 
		cout<<"Negative # -ve";
}
		else cout<<"Its zero";
}

	
*/
										//Task#04(b)


#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter any Number: ";
	cin>>num;
	
	if(num>=10 && num<=99)
	{
		cout<<"Entered Number is Double figured. ";
	}
	else 
	{
		cout<<"Its Not a Double figure Number. ";
	}
	
}
