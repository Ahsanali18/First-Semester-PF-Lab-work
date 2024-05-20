#include<iostream>
using namespace std;
int main()
{
	int i=3;			//1st of all we declare/initialize a variable of type int and give it the value 3. 
	i++;				//Now here we apply an incremenent to our value called post increment means it will 1st display the same
						//value and then +1 added to the value 
	cout<<i<<endl; 		// Now here we use cout statement means we wanna to display the value of i after increment then it will 
						// display the value after increment means (4)
	++i;				//Now here we use the increment of type pre increment means 1stly there will be increment occurs and then it 
						//will display the value on screen with increment
	cout<<i<<endl;		//Here we wanna to display the value after increment and value displayed here will be (5)
	cout<<++i<<endl;	//Here we again wana to take increment in the value of i with pre increment operator and want to display it
						//on the screen. Now here will show the value which is basically (6).   
	cout<<i++<<endl;	//Here we again take increment in the value of i called post increment means 1stly it will display the same
						//value and then takes increment to that value now thats the reason in this row and above that row there will
						//be the same value displayed i.e (6) but in general it will be 7 
	cout<<i;			//now at last we want to display the value of i after certain steps by using incre/decre operators and finally
						//it will display the value after post increment which was taken in above step and it will display the value 
						// that will be (7) finally.
	
}
