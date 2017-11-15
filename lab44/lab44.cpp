//Elias Naron
// 10/09/2017
/*
This is a lab that is teaching how to use cstrings
We essentially utitlize a bunch of commands we didnt know about prior!
*/

#include <iostream> //includes
#include <cstring>
#include <cctype>


using namespace std;

int main () { //main
    
    const int           maxvalue  = 30;     // showing max value
    char      namefirst[maxvalue] = "";     // Used this same max JUST IN CASE! Cumulative
    char      namelast [maxvalue] = "";
    
    char orientation1[maxvalue] = "";       // These are to set my orientations to more than just First then Last. 
    char orientation2[maxvalue] = "";
    char orientation3[maxvalue] = "";
    
    cout<<" Please Enter Your First Name (MAX OF 10 CHARACTERS):"<<endl; //First Output
    
    cin>>namefirst; // First input
   
    
    
    while (strlen(namefirst) > 10){        // the point of this is to make sure the string length is a certain size otherwise it outputs that information and allows you to retry.
        cout<<"The name you entered is too many characters, please limit it to 10"<<endl;
        cin>>namefirst;
        
    }
                                             // the point of this is to make sure the string length is a certain size otherwise it outputs that information and allows you to retry.
    cout<<" Please Enter Your Last Name (MAX OF 20 CHARACTERS):"<<endl;
    
    cin>>namelast;
     
     while (strlen(namelast) > 20){           // This is a the same check
        cout<<"The name you entered is too many characters, please limit it to 20"<<endl;
        cin>>namelast;
        
    }
    
    
    
    
    
    
    strncpy  (orientation1,namefirst, 1);   //copy the fist string's  1rst char
    strcat   (orientation1, namelast);      // puts things together 
    
    strcpy   (orientation2,namefirst);      //copies string first
    strncat  (orientation2, namelast, 1);   // copy last name string's 1rst char
    
    strcpy   (orientation3,namelast);       // copy
    strncat  (orientation3, namefirst, 1);  // copy first names 1rst char
    
    
    
    
    
    cout<<endl;  // aesthetics
    cout<<endl;
    
    if (strcmp (namefirst,namelast) == 0  ) {   // Error making sure they may not have meant to enter the same name twice.
        cout<<"Warning, You may have entered your first name twice."<<endl;
    }
    
    
    cout<<"The name you entered is :"<<endl;    // Showing you what you entered.
    cout<<namefirst<<"  "<<namelast<<endl;
    
    cout<<endl;
    
    cout<<"Name Orientation 1:"<<endl;          // DISPLAYS
    cout<<orientation1<<endl;
    cout<<endl;
    cout<<"Name Orientation 2:"<<endl;
    cout<<orientation2<<endl;
    cout<<endl;
    cout<<"Name Orientation 3:"<<endl;
    cout<<orientation3<<endl;
    
    return 0;
    
    
}

/*    EXAMPLES:
 Please Enter Your First Name (MAX OF 10 CHARACTERS):
Elias
 Please Enter Your Last Name (MAX OF 20 CHARACTERS):
Elias


Warning, You may have entered your first name twice.
The name you entered is :
Elias  Elias

Name Orientation 1:
EElias

Name Orientation 2:
EliasE

Name Orientation 3:
EliasE
================================================================================
 Please Enter Your First Name (MAX OF 10 CHARACTERS):
April      
 Please Enter Your Last Name (MAX OF 20 CHARACTERS):
Browne


The name you entered is :
April  Browne

Name Orientation 1:
ABrowne

Name Orientation 2:
AprilB

Name Orientation 3:
BrowneA

================================================================================
 Please Enter Your First Name (MAX OF 10 CHARACTERS):
AnaElizabeth 
The name you entered is too many characters, please limit it to 10
Hazeltine-Smith
The name you entered is too many characters, please limit it to 10
================================================================================
Please Enter Your First Name (MAX OF 10 CHARACTERS):
James
 Please Enter Your Last Name (MAX OF 20 CHARACTERS):
James


Warning, You may have entered your first name twice.
The name you entered is :
James  James

Name Orientation 1:
JJames

Name Orientation 2:
JamesJ

Name Orientation 3:
JamesJ



*/