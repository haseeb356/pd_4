#include<iostream>
using namespace std;
void value(string input);
main()
{
string userInput;
cout<<"enter true or false:";
cin>>userInput;
value(userInput);
}
void value(string input)
{
if (input == "true")
	{
	cout<<"false";
	}
if (input == "false")
	{
	cout<<" true";
	}
}