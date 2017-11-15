//Elias Naron   
//11/07/2017


#include <iostream>                                                  
#include <string>
using namespace std;


class Online_Shop {
    public:
        Online_Shop();
        Online_Shop( string item, int num, double price);
        
        void Print();
        
        void SetName( string name);
        void SetInventory( int num);
        void SetPrice( double price);
        
        string GetName();
        int GetInventory();
        double GetPrice();
    
    private:
        string Online_Shop_;
        int inventory_;
        double price_;
};

Online_Shop::Online_Shop(){
    Online_Shop_ = "Fun Object";
    inventory_ = 1;
    price_ = 100.00;
}

Online_Shop::Online_Shop(string item, int num, double price){
    Online_Shop_ = item;
    inventory_ = num;
    price_ = price;
}

void Online_Shop::Print(){
    cout << Online_Shop_ << "        " << price_ << "     Stock: " << inventory_ << endl;
}

void Online_Shop::SetName( string name){
    Online_Shop_ = name;
}

void Online_Shop::SetInventory( int num){
    inventory_ = num;
}

void Online_Shop::SetPrice( double price){
    price_ = price;
}

string Online_Shop::GetName(){
    return Online_Shop_;
}

int Online_Shop::GetInventory(){
    return inventory_;
}

double Online_Shop::GetPrice(){
    return price_;
}

int main(){
    
    
    return 0;
}