 /*TASK#07
Write a program in C++ to check the upper and lower limits of integer.
									"STARTING OF PROGRAM"
*/

#include"iostream" 
#include"limits"
using namespace std;
int main()
{
	cout<<"LIMITS OF INTEGER DATA Type:-" <<endl;
	cout<<"Upper Limit of int: "<< numeric_limits<int>::max()<<endl;
	cout<<"Lower Limit of int: "<< numeric_limits<int>::min()<<endl;	
	return 0;
}

