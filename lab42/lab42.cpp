//Elias Naron   
//11/07/2017


#include <iostream>     //Gotta have the includes!                                                  
#include <string>
using namespace std;

int main(){  //main starts here
                                                      
    string goods_[10];             // This is my first array that stores buyable items
      goods_[9]= "Diamond      ";
      goods_[8]= "Silver        "; // this shows the item within each tier of the array
      goods_[7]= "Platinum      ";
      goods_[6]= "Titanium      ";
      goods_[5]= "Onyx          ";
      goods_[4]= "Cobalt        ";
      goods_[3]= "Ruby          ";
      goods_[2]= "Emerald       ";
      goods_[1]= "Amethyst      ";
      goods_[0]= "Topaz         ";
    double price_[10] ;   // second array 
       price_[9] = 999.99;//second set of values per tier
       price_[8] = 899.99;
       price_[7] = 799.99;
       price_[6] = 699.99;
       price_[5] = 599.99;
       price_[4] = 499.99;
       price_[3] = 399.99;
       price_[2] = 299.99;
       price_[1] = 199.99;
       price_[0] = 99.99;
    int stock_[10]; //third set (final set)
        stock_[9] = 2;//all with the same value but i didnt know how to make it the same for each
        stock_[8] = 2;// without re-stating them
        stock_[7] = 2;
        stock_[6] = 2;
        stock_[5] = 2;
        stock_[4] = 2;
        stock_[3] = 2;
        stock_[2] = 2;
        stock_[1] = 2;
        stock_[0] = 2;
        
        
    double cart_total_= 0;                                                     
    char shopping_ = 'y' ;// these continue loops were hard for me and for the longest time i couldnt get it to start!
                          // so i found out you have to initialize it to y so that the program can start from a technical continue
    
    while ( shopping_ == 'Y' || shopping_ == 'y'){     // continue shopping loop :)                  
        int user_input_ = 0;
        
        for ( int i = 0; i < 10; i++ ){         // i had to see how this was done but it functions as a way to index the items for the cart                               
        cout << i + 1 << "~ " << goods_[i] << "--  $" << price_[i] << endl;
        }
        
        cout << "Select another item that you would like to add to your cart: "; //grabbing user input where everything runrs
        cin >> user_input_;                                                       
        if (stock_[user_input_ - 1] <= 0){
            cout << "Unfortunately that item is sold out; Please select another (different) item: ";
            cin >> user_input_;
        }
        stock_ [user_input_ - 1] = stock_[user_input_ - 1] - 1;//this was tricky but its how i remove the item from stock it has to be its own array
        
        cout << "You have added :  " << goods_[user_input_ - 1] << "to your cart."<<endl; 
        
        cart_total_ = cart_total_ + price_[user_input_ - 1]; // this adds the item to the total in the cart
        
        cout << "Continue Shopping ? (Y)es or (N)o : ";                
        cin >> shopping_; //input for the continuation loopage
    }

     cout << "Your total cart value is : " << cart_total_; // yay all done!                           

    return(0);
}