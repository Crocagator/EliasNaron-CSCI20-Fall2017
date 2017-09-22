//Elias Naron
//9/21/2017
//guessing game


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
//Declaring function
//Function
int NumberGenerator ()
{
    srand(time(0));
    int GeneratedNumber = rand() % 100 + 1;
    cout<<"Your Random Number Is !"<<endl;
    cout<<GeneratedNumber<<endl;
    cout<<"Wow!"<<endl;
    
  

}
// Calling function
int main()
{
   
    NumberGenerator();

}
