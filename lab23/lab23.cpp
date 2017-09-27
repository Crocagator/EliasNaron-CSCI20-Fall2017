//Elias Naron
//9/26/2017
/*
This is a way to show that we can call functions from place to place
the method we are doing this is a fun guessing game with set parameters!
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* This is a swap function ,which to my understanding is just
setting kind of a value place holder on your arguments so you can toss them
between functions? Im not really sure, but it didn't break my program so i am
happy.... */


void swap (int& minnum, int& maxnum)
{
    int swaap;
    swaap = maxnum;
    swaap = minnum;
    
}
/* This is my real function that does the math! I set this here so i can call
it in my main later on */

void NumberGenerator(int& maxnum ,int& minnum)
{
   

    swap (minnum, maxnum);
    srand(time(0));
    int difference = (maxnum - minnum) + 1 ;
    int GeneratedNumber = rand() % difference + minnum;
    cout<<GeneratedNumber<<endl;
    
    
}
// Calling function and getting user input!
int main()
{
    int minnum;
    int maxnum;
 
    cout<<"▲Fun random number calulator!▲"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Please input your \"minimum\" possible number."<<endl;
    cin>>minnum;
    cout<<endl;
    cout<<"Please input your \"maximum\" possible number."<<endl;
    cin>>maxnum;
    
    cout<<"Your random number between "<<minnum<<" and "<<maxnum<<" is :"<<endl;
    NumberGenerator(maxnum, minnum);
    cout<<"Wow!"<<endl;
    


    
}

