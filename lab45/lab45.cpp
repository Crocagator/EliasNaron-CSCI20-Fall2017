//Elias Naron 
//11/14/17
/*

*/


#include <iostream> //includes
#include <string>
#include <cctype>


using namespace std;

void lowercase (string& str) {   // makes things lowercase
    for (int i = 0; i <str.length (); i++){
        str.at(i) = tolower (str.at(i));
    }
    return ;
}

int main () { //main
    

    string namefirst    = "";     // Used this same max JUST IN CASE! Cumulative
    string namelast     = "";
    
    string orientation1 = "";       // These are to set my orientations to more than just First then Last. 
    string orientation2 = "";
    string orientation3 = "";
    
    cout<<" Please Enter Your First Name (MAX OF 10 CHARACTERS):"<<endl; //First Output
    
    cin>>namefirst; // First input
   
    
    
    while ((namefirst.length()) > 10){        // the point of this is to make sure the string length is a certain size otherwise it outputs that information and allows you to retry.
        cout<<"The name you entered is too many characters, please limit it to 10"<<endl;
        cin>>namefirst;
        
    }
                                             // the point of this is to make sure the string length is a certain size otherwise it outputs that information and allows you to retry.
    cout<<" Please Enter Your Last Name (MAX OF 20 CHARACTERS):"<<endl;
    
    cin>>namelast;
     
     while ((namelast.length()) > 20){           // This is a the same check
        cout<<"The name you entered is too many characters, please limit it to 20"<<endl;
        cin>>namelast;
        
    }
    
    
    
    
    
    
   orientation1 = namefirst + namelast;
   lowercase(orientation1) ;             //copy the fist string's  1rst char
   
   orientation2 = namefirst.at(0) + namelast;
   lowercase(orientation2);
  
   orientation3 = namefirst + namelast.at(0);
   lowercase(orientation3);

    
    
    
    cout<<endl;  // aesthetics
    cout<<endl;
    
    if ((namefirst.length(),namelast.length()) == 0  ) {   // Error making sure they may not have meant to enter the same name twice.
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
/*                  EXAMPLES



 Please Enter Your First Name (MAX OF 10 CHARACTERS):
Your
 Please Enter Your Last Name (MAX OF 20 CHARACTERS):
name


The name you entered is :
Your  name

Name Orientation 1:
yourname

Name Orientation 2:
yname

Name Orientation 3:
yourn
==================================================================================
The name you entered is :
April  Browne

Name Orientation 1:
aprilbrowne

Name Orientation 2:
abrowne

Name Orientation 3:
aprilb
===============================================================================
 Please Enter Your First Name (MAX OF 10 CHARACTERS):
AnaElizabeth Hazeltine-Smith
The name you entered is too many characters, please limit it to 10
The name you entered is too many characters, please limit it to 10
==============================================================================
Please Enter Your First Name (MAX OF 10 CHARACTERS):
James
 Please Enter Your Last Name (MAX OF 20 CHARACTERS):
James


The name you entered is :
James  James

Name Orientation 1:
jamesjames

Name Orientation 2:
jjames

Name Orientation 3:
jamesj