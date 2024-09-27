#include<iostream>
using namespace std;
float calculateDiscount(string country, float ticketPrice);
main()
{
string country;
float ticketPrice;
cout<<"enter the country:";
cin>>country;
cout<<"enter the ticket price:$";
cin>>ticketPrice;
float finalPrice=calculateDiscount(country,ticketPrice);
cout<<"the price after discount is:$"<<finalPrice;
}
 float calculateDiscount(string country, float ticketPrice)
{ 
float discount;
if (country == "Pakistan") {
        discount = 0.05;
    } if (country == "Ireland") {
        discount = 0.10;
    }  if (country == "India") {
        discount = 0.20; 
    } if (country == "England") {
        discount = 0.30; 
    } if (country == "Canada") {
        discount = 0.45;
    } 
return ticketPrice;
}
