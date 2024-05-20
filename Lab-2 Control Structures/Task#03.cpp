/*#include<iostream>
using namespace std;
int main()
{
	char anychar;
	cout<<"Enter any character: ";
	cin>>anychar;
	cout<<((anychar=='a'|| anychar=='e'|| anychar=='i' || anychar=='o' || anychar=='u')? "Character is Vowel" : "Consonant");
	return 0;
	
}*/
/*

#include<iostream>
using namespace std;
int main()
{
	char input;
	cout<<"Enter any character: ";
	cin>>input;
	if (input=='a' || input=='e' || input=='i'|| input=='o' || input=='u')
	{
		cout<<"Character is vowel";
	}
	else 
	cout<<"consonant";
}
*/

#include<iostream>
using namespace std;	
int main()
{
	char value;
	cout<<"Enter any character: ";
	cin>>value;
	if(value=='a'|| value=='e' ||value=='i' || value=='o' || value=='u')
	{
	cout<<"Clicked character is vowel ";}
	 
	else if (value=='b' || value=='c' || value=='d' || value=='f'|| value=='g'|| value=='h'|| value=='j'|| value=='k'|| value=='l'|| value=='m'
	|| value=='n'|| value=='p'|| value=='q'|| value=='r'|| value=='s'|| value=='t'|| value=='v'|| value=='w'|| value=='x'|| value=='y'|| value=='z')
	{
	cout<<"Clicked character is consonant";
	}
	
	else 
	cout<<"Its not a character";
}
