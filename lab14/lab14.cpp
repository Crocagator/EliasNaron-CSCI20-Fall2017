#include <iostream>
using namespace std;


//Elias Naron
//9/5/2017
/* Explanation:
This is a program that aims to convert a number
(in cents) into the best denomination of quarts>dimes>nickels>pennies.
*/
//I want to set my integers, do my calculations, then give the output to the user...


int main() //This is where the program starts!
{
    
// Now i am going to lay out my int's

    int number_cents_deposited = 0;
    int quarters_deposited = 0;
    int dimes_deposited = 0;
    int nickles_deposited = 0;
    int pennies_deposited = 0;
    int dollars_deposited = 0;
    int centsbefore = 0.0, centsafter = 0.0;
    double totalbefore = 0.0, totalafter = 0.0;
    double const fee = 0.109;
    
    
//User interaction measured here. 
    
    cout << "Welcome to Eli's Coin Counter!"<< endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    cout << "Please indicate the value (in cents) you wish to calculate!"<<endl;
    cin >> number_cents_deposited;
    
//hopefully the correct calculations behind the integers.

    quarters_deposited = (number_cents_deposited / 25) ;
    dimes_deposited    = ((number_cents_deposited % 25) /10) ;
    nickles_deposited  = ((number_cents_deposited % 25) % 10) / 5 ;
    pennies_deposited  = ((number_cents_deposited % 25) % 10) % 5 ;
    
//conversions

    totalbefore = number_cents_deposited;
    totalbefore = totalbefore /100;
    centsbefore = totalbefore;
    centsbefore = centsbefore % 100;
    
    totalafter  = number_cents_deposited - (number_cents_deposited * fee);
    totalafter  = (totalafter /100);
    
// Now to tell the user what is happening!

    cout<<"The total amount deposited: $" << totalbefore << endl;
    cout<< "This would convert to:  " << endl;
    cout<<" Quaters: "<< quarters_deposited << endl;
    cout<<" Dimes  : "<< dimes_deposited <<endl;
    cout<<" Nickles: "<< nickles_deposited <<endl;
    cout<<" Pennies: "<< pennies_deposited << endl;
    cout<<"After a transaction fee of 10.9% your cash voucher has the valuee of: $" << totalafter <<  endl;
   
    
}