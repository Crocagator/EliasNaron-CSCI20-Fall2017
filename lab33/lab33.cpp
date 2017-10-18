//Elias Naron
//10/17/2017
/*

This is  a fun number generator but this time it actually does something, compared to when we first attempted it (which was to learn how to use random numbers with rand)
When the user is too high or low it will inform the user and allow another guess. when the guess is correct, the user is congratulated! Oh also, there is a technical delay before the user 
is let know if their guess was correct or not.
*/


// preprocessor directives
#include <iostream>
#include <ctime>


//namespace delcaration! 
using namespace std;


// the main! This is where the program actually starts.
int main (){
    
// These are my variables, we didn't need too many this time.
    int random_Number_ = 0;
    int number_Guess_ = 0;
    
// this is where i am generating my actual random number
    srand(time(0));
    random_Number_ = rand() % 50 + 1;
// this is where i set the random number to be between 1 and 50
    
// This is where i am asking the user to guess for the first time!
    cout<<"Please guess \"the\" random number between 1 and 50"<<endl;
    cin>>number_Guess_;
    
    
    while ((number_Guess_ <1) || ( number_Guess_ > 50)) {
        cout<<"Please enter a number between 1 & 50..."<<endl;
        cin>>number_Guess_;
    }
    
    
// these are my loops! the While is mainly for user input while the for is "for" my suspense loop.

// This is where i am correcting the guesses that are too high or too low then allowing another guess.
   while (random_Number_ != number_Guess_) {
        for (int suspense=5; suspense >= 1; suspense -- ) {
    
        cout<<suspense << " ... ";
    }
 
        if (random_Number_ > number_Guess_) {
       
       cout <<"Your guess is too low! Try again!"<<endl;
       
        }
        else if (random_Number_ < number_Guess_) {
       
       cout <<"Your guess is too high! Try again!"<<endl;
       
        }
       cin>>number_Guess_;
       while ((number_Guess_ <1) || ( number_Guess_ > 50)) {
        
        cout<<"Please enter a number between 1 & 50..."<<endl;
        cin>>number_Guess_;
    }
       
    }
  // yay ! this is the end of my program!
  
   cout<<"your guess was just right!"<<endl;
  
}