//Elias Naron   
//11/2/2017


#include <iostream>
#include <string>

using namespace std;

int main () {
    
    int     NumItems = 10;
    string  Items_[NumItems] ;
    double  Price_[NumItems] ;
    int UserInput = 0;
    double Cart = 0 ;
    //string StillShopping = ' ';
    
    
    Items_[10]               ; Price_[10]        ;
    Items_[9] = "Diamond   "; Price_[9] = 9.99  ;
    Items_[8] = "Gold bar   "; Price_[8] = 8.99  ;
    Items_[7] = "Steak      "; Price_[7] = 7.99  ;
    Items_[6] = "Silver Bar "; Price_[6] = 6.99  ;
    Items_[5] = "Iron Bar   "; Price_[5] = 5.99  ;
    Items_[4] = "Orb of Zot "; Price_[4] = 4.99  ;
    Items_[3] = "Emerald    "; Price_[3] = 3.99  ;
    Items_[2] = "Bone       "; Price_[2] = 2.99  ;
    Items_[1] = "Chicken    "; Price_[1] = 1.99  ;
    Items_[0] = "Dust       "; Price_[0] = 0.99  ;
    
    
     
    for (int i = 0; i <NumItems; i++) {
        cout<< i+1 << ". "<< Items_[i]<<" -   "<<Price_[i]<<endl;
    }
    cout<<"pick item # want..."<<endl;
    cin>>UserInput;
    
    if (UserInput == 0) {
        
        Cart = Price_[0];
        
    }
    if (UserInput == 1) {
        
        Cart = Price_[1];
        
    }
    if (UserInput == 2) {
        
        Cart = Price_[2];
        
    }
    if (UserInput == 3) {
        
        Cart = Price_[3];
        
    }
    if (UserInput == 4) {
        
        Cart = Price_[4];
        
    }
    
    if (UserInput == 5) {
        
        Cart = Price_[5];
        
    }
    
    if (UserInput == 6) {
        
        Cart = Price_[6];
        
    }
    
    if (UserInput == 7) {
        
        Cart = Price_[7];
        
    }

    if (UserInput == 8) {
        
        Cart = Price_[8];
        
    }
     
    if (UserInput == 9) {
        
        Cart = Price_[9];
        
    }
     
    
    //while ( StillShopping == 'Y' || StillShopping == 'y' || StillShopping == "yes" ||StillShopping == "Yes") {
        
    //}
    cout<<Cart;
    
}