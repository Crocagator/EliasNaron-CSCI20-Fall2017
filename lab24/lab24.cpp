//Elias Naron

// 9/28/2017

#include <iostream>
#include <cstdlib>                                                                               //Including the libraries required
#include <ctime>
using namespace std;

/*
The purpose of this function is to take a inputed pound value and converting it into kilograms
*/
double Pounds (double lbs_)
{
    double kgs_ = lbs_ * 2.20462;
    return kgs_;
}

// This function grabs a kilo value and converts it into a lb value

double Kilograms (double kgs_)
{
    double lbs_ = kgs_ / 2.2046226218;
    return lbs_;
}

/*
This functions will take the minimum value and maximum value and swap them using call by function to change it in memory
*/

int Swap(int& min_random, int& max_random)                                                     
{
    int swaap=0;
    swaap = min_random;
    min_random = max_random;
    max_random = swaap;
    
}

/*
This function calls a random number between two numbers later inputed by the user and seeds that random number in time so that it is more unpredictable
*/

int NumberGenerator(int& maxnum ,int& minnum)
{
   

    swap (minnum, maxnum);
    srand(time(0));
    int difference = (minnum - maxnum) + 1 ;
    int GeneratedNumber = rand() % difference + maxnum;
    
    return GeneratedNumber;

}

int main()                                                                                        //Running the main function refering back to my user defined function
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
    
    cout<<NumberGenerator(maxnum, minnum);
    cout<<endl;
    cout<<"Wow!"<<endl;
    
    double end_lbs_ = NumberGenerator(maxnum, minnum);                              //Asigns variables to the return of the functions so that the can be pluigged into the other functions
    double end_kgs_ = Pounds(end_lbs_);
    double end_end_lbs_ = Kilograms(end_kgs_);
    
    cout << "Your initial random weight in lbs is: " << end_lbs_ << endl;
    cout << "Converted to Kilos is: " << end_kgs_ << endl;
    cout << "Converted back to lbs: " << end_end_lbs_;                                             //output
    
    return 0;
}