//Elias Naron
//10/17/2017

 // This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.
// it should continue reading in values until the user enters a -1.
#include <iostream> 

using namespace std; 
int main() {
        // Read a character in
        char ch;
        cout << "Please enter a character: ";
        cin  >> ch;
         
// check -- is it a letter??

/* 
First thing i did is simplify what it was trying to accomplish which was a weird if if if way of doing the same thing you could summarize in one line.
So i moved two if's to one if and separated them wiht && that way both must be true which was happening anyways just way more confusingly.

*/
        if ((ch >= 'A') && (ch <= 'Z'))  {
        
               cout << "Yes, that is a uppercase letter." << endl;
            }
    
/*
Here, im essentially doing the same thing!
*/
        else if ((ch >= 'a') && (ch <= 'z')) {
               cout << "Yes, that is a lowercase letter" << endl;
            }
                else   {
            cout << "Not a letter" << endl;
        }
          return 0; }