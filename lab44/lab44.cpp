//Elias Naron
// 10/09/2017

#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

int main (){
    
    const int           maxvalue  = 30;
    char      namefirst[maxvalue] = "";
    char      namelast [maxvalue] = "";
    
    char orientation1[maxvalue] = "";
    char orientation2[maxvalue] = "";
    char orientation3[maxvalue] = "";
    
    cout<<" Please Enter Your First Name (MAX OF 10 CHARACTERS):"<<endl;
    
    cin>>namefirst;
   
    
    
    while (strlen(namefirst) > 10){
        cout<<"The name you entered is too many characters, please limit it to 10"<<endl;
        cin>>namefirst;
        
    }
    
    cout<<" Please Enter Your Last Name (MAX OF 20 CHARACTERS):"<<endl;
    
    cin>>namelast;
     
     while (strlen(namelast) > 20){
        cout<<"The name you entered is too many characters, please limit it to 20"<<endl;
        cin>>namelast;
        
    }
    
    
    
    
    
    
    strncpy  (orientation1,namefirst, 1);
    strcat   (orientation1, namelast);
    
    strcpy   (orientation2,namefirst);
    strncat  (orientation2, namelast, 1);
    
    strcpy   (orientation3,namelast);
    strncat  (orientation3, namefirst, 1);
    
    
    
    
    
    cout<<endl;
    cout<<endl;
    
    if (strcmp (namefirst,namelast) == 0  ) {
        cout<<"Warning, You may have entered your first name twice."<<endl;
    }
    
    
    cout<<"The name you entered is :"<<endl;
    cout<<namefirst<<"  "<<namelast<<endl;
    
    cout<<endl;
    
    cout<<"Name Orientation 1:"<<endl;
    cout<<orientation1<<endl;
    cout<<endl;
    cout<<"Name Orientation 2:"<<endl;
    cout<<orientation2<<endl;
    cout<<endl;
    cout<<"Name Orientation 3:"<<endl;
    cout<<orientation3<<endl;
    
    return 0;
    
    
}