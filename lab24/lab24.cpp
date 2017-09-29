//Elias Naron

// 9/28/2017

#include <iostream>
#include <cstdlib>                                                                              
#include <ctime>
using namespace std;

// I worked on this for too long, i didnt have time to comment before turning it in late :/ dont hate me!
double Pounds (double lbs_)
{
    double kgs_ = lbs_ * 2.20462;
    return kgs_;
}

 

double Kilograms (double kgs_)
{
    double lbs_ = kgs_ / 2.2046226218;
    return lbs_;
}


int Swap(int& min_random, int& max_random)                                                     
{
    int swaap=0;
    swaap = min_random;
    min_random = max_random;
    max_random = swaap;
    
}

int NumberGenerator(int& maxnum ,int& minnum)
{
   

    swap (minnum, maxnum);
    srand(time(0));
    int difference = (minnum - maxnum) + 1 ;
    int GeneratedNumber = rand() % difference + maxnum;
    
    return GeneratedNumber;

}

int main()                                                                                  
{
    int minnum;
    int maxnum;
    double end_lbs_ = NumberGenerator(maxnum, minnum);                              
    double end_kgs_ = Pounds(end_lbs_);
    double end_end_lbs_ = Kilograms(end_kgs_);
 
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
    cout << "Your starting weight in pounds is:" << end_lbs_ << endl;
    cout << "Your starting weight in kiolograms is: " << end_kgs_ << endl;
    cout << "After being converted back and forth your ending weight in pounds is: " << end_end_lbs_;                                             
    
    
}